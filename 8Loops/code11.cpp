#include <iostream>
using namespace std;

int main(){
int n;
int result=0;
cout<<"Enter the value of n";
cin>>n;
while(n>0){
    int lastdigit=n%10;
    result=result*10+lastdigit;
    n=n/10;
   
}
 cout<<result;

    return 0;
}