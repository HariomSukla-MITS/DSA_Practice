#include <iostream>
using namespace std;

//sum of digits using while loops
int main(){
int n;
int sum=0;
cout<<"Enter the value of n";
cin>>n;
while(n>0){
   int lastdigit=n%10;
    sum=sum+lastdigit;
   n=n/10;
}
cout<<"Digit Sum="<<sum;

    return 0;
}