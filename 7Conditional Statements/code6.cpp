#include <iostream>
using namespace std;

// Tax calculator System
int main(){

    int income;
    float tax;
    cout<<"Enter Your income(in Lakh)";
    cin>>income;
    if(income<5){
        tax=0;
    }
    else if(income<=10){
        tax=0.2*income;
    }
    else{
       tax=0.3*income;
    }
    cout<< "Tax="<<(tax*100000)<<endl;

    return 0;
}