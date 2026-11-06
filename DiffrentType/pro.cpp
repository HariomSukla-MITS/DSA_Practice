#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNum, string name, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = name;
        balance = initialBalance;
    }

    int getAccountNumber() const { return accountNumber; }
    string getHolderName() const { return accountHolderName; }
    double getBalance() const { return balance; }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\n✅ Successfully deposited $" << amount << "\n";
        } else {
            cout << "\n❌ Invalid deposit amount.\n";
        }
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "\n❌ Insufficient balance!\n";
            return false;
        } else if (amount <= 0) {
            cout << "\n❌ Invalid withdrawal amount.\n";
            return false;
        } else {
            balance -= amount;
            cout << "\n✅ Successfully withdrew $" << amount << "\n";
            return true;
        }
    }

    void displayAccount() const {
        cout << "| " << setw(14) << accountNumber 
             << " | " << setw(18) << accountHolderName 
             << " | $" << setw(11) << fixed << setprecision(2) << balance << " |\n";
    }

    // Helper to format data for file writing
    void writeToFile(ofstream &file) const {
        file << accountNumber << "," << accountHolderName << "," << balance << "\n";
    }
};

// Function prototypes
void loadAccounts(vector<BankAccount> &accounts);
void saveAccounts(const vector<BankAccount> &accounts);
void createAccount(vector<BankAccount> &accounts);
void displayAllAccounts(const vector<BankAccount> &accounts);
void depositMoney(vector<BankAccount> &accounts);
void withdrawMoney(vector<BankAccount> &accounts);
int findAccount(const vector<BankAccount> &accounts, int accNum);

int main() {
    vector<BankAccount> accounts;
    loadAccounts(accounts);
    int choice;

    do {
        cout << "\n=================================";
        cout << "\n🏦 BANK MANAGEMENT SYSTEM 🏦";
        cout << "\n=================================";
        cout << "\n1. Create New Account";
        cout << "\n2. Display All Accounts";
        cout << "\n3. Deposit Money";
        cout << "\n4. Withdraw Money";
        cout << "\n5. Exit";
        cout << "\n=================================";
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount(accounts);
                break;
            case 2:
                displayAllAccounts(accounts);
                break;
            case 3:
                depositMoney(accounts);
                break;
            case 4:
                withdrawMoney(accounts);
                break;
            case 5:
                saveAccounts(accounts);
                cout << "\nThank you for using our banking system. Goodbye!\n";
                break;
            default:
                cout << "\n❌ Invalid choice! Please select between 1-5.\n";
        }
    } while (choice != 5);

    return 0;
}

void createAccount(vector<BankAccount> &accounts) {
    int accNum;
    string name;
    double initialBalance;

    cout << "\nEnter Account Number (Integer): ";
    cin >> accNum;
    
    if (findAccount(accounts, accNum) != -1) {
        cout << "\n❌ Account number already exists!\n";
        return;
    }

    cin.ignore(); // Clear newline buffer
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    accounts.push_back(BankAccount(accNum, name, initialBalance));
    cout << "\n🎉 Account created successfully!\n";
    saveAccounts(accounts);
}

void displayAllAccounts(const vector<BankAccount> &accounts) {
    if (accounts.empty()) {
        cout << "\n📁 No accounts found.\n";
        return;
    }

    cout << "\n----------------------------------------------------\n";
    cout << "| Account Num    | Owner Name         | Balance      |\n";
    cout << "----------------------------------------------------\n";
    for (const auto &acc : accounts) {
        acc.displayAccount();
    }
    cout << "----------------------------------------------------\n";
}

void depositMoney(vector<BankAccount> &accounts) {
    int accNum;
    double amount;
    cout << "\nEnter Account Number: ";
    cin >> accNum;

    int index = findAccount(accounts, accNum);
    if (index == -1) {
        cout << "\n❌ Account not found.\n";
        return;
    }

    cout << "Enter deposit amount: $";
    cin >> amount;
    accounts[index].deposit(amount);
    saveAccounts(accounts);
}

void withdrawMoney(vector<BankAccount> &accounts) {
    int accNum;
    double amount;
    cout << "\nEnter Account Number: ";
    cin >> accNum;

    int index = findAccount(accounts, accNum);
    if (index == -1) {
        cout << "\n❌ Account not found.\n";
        return;
    }

    cout << "Enter withdrawal amount: $";
    cin >> amount;
    if (accounts[index].withdraw(amount)) {
        saveAccounts(accounts);
    }
}

int findAccount(const vector<BankAccount> &accounts, int accNum) {
    for (size_t i = 0; i < accounts.size(); ++i) {
        if (accounts[i].getAccountNumber() == accNum) {
            return i;
        }
    }
    return -1;
}

void saveAccounts(const vector<BankAccount> &accounts) {
    ofstream outFile("accounts.txt", ios::trunc);
    if (!outFile) {
        cout << "\n❌ Error saving data to file.\n";
        return;
    }
    for (const auto &acc : accounts) {
        acc.writeToFile(outFile);
    }
    outFile.close();
}

void loadAccounts(vector<BankAccount> &accounts) {
    ifstream inFile("accounts.txt");
    if (!inFile) return; // File doesn't exist yet, which is fine for first run

    string line;
    while (getline(inFile, line)) {
        size_t pos1 = line.find(',');
        size_t pos2 = line.find(',', pos1 + 1);

        if (pos1 != string::npos && pos2 != string::npos) {
            int accNum = stoi(line.substr(0, pos1));
            string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
            double balance = stod(line.substr(pos2 + 1));
            accounts.push_back(BankAccount(accNum, name, balance));
        }
    }
    inFile.close();
}
