// #include <iostream>
// using namespace std;

// int primenum(int n){
//     if (n/1 == 1 && n/n == 1){
//         cout<<"Prime Numbers"<<endl;
//      }
//      else{
//         cout<<"Not a Prime Number"<<endl;
//      }
// }

// int main(){
// cout<<primenum(5)<<endl;
//     return 0;
// }

// 


#include <iostream>
using namespace std;

bool isprime(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
cout<<isprime(1)<<endl;

    return 0;
}