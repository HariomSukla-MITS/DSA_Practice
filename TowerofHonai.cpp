#include <iostream>
using namespace std;



void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << "\n";
        return;
    }
    
     towerOfHanoi(n - 1, source, auxiliary, destination);
    
     cout << "Move disk " << n << " from " << source << " to " << destination << "\n";
    
     towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n = 3; 
     towerOfHanoi(n, 'A', 'C', 'B'); 
    
    return 0;
}