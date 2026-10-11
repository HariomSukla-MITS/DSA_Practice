#include <iostream>
using namespace std;

// Build a Calculator
int main(){
int a,b;
char op;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of op";
cin>>op;
cout<<"Enter the value of b:";
cin>>b;

// if(op=='+'){
// cout<<"a+b="<<a+b;
// }
// else if(op=='-'){
//     cout<<"a-b="<<a-b;
// }
// else if(op=='*'){
//     cout<<"a*b="<<a*b;
// }
// else if(op=='/'){
//     cout<<"a/b="<<a/b;
// }
// else{
//     cout<<"Invalid";
// }

switch(op){
    case '+': cout<<"a+b="<<a+b;
    break;
    case '-': cout<<"a-b="<<a-b;
    break;
    case '*': cout<<"a*b="<<a*b;
    break;
    case '/': cout<<"a/b="<<a/b;
    break;
    default : cout<<"Invalid, Try Again";
}


    return 0;
}