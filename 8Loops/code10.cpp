#include <iostream>
using namespace std;

//print reverse digit num using while loops
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        cout<<lastdigit;
        n=n/10;
    }
    return 0;
}