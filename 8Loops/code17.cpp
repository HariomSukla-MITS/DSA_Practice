#include <iostream>
#include <cmath>
using namespace std;

//Optimization for check prime
int main(){
int n=6;

bool isprime=true;
int i;
for(int n=2; i<=sqrt(n); i++){
    if(n%i==0){
        isprime =false;
        break;
    }
}
if(isprime){
    cout<<"Number is Prime"<<endl;
}
else{
    cout<<"Number is not Prime"<<endl;
}

    return 0;
}