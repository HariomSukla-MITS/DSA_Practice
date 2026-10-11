#include <iostream>
using namespace std;

//oddsum of digits using while loops
int main(){
int n;
cout<<"Enter the value of n";
cin>>n;
int oddsum=0;
while(n>0){
    int lastdigit=n%10;
    
    if(n%2!=0){
    oddsum=oddsum+lastdigit;

    }
    n=n/10;

}
cout<<"Oddsum="<<oddsum;

    return 0;
}