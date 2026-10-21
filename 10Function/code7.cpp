// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
//     cout << factorial(0) << endl;
//     return 0;
// }

// 2nd approch (mem)

#include <iostream>
using namespace std;

int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
       factorial=factorial*i;
    }
    cout<<"Factorial"<<n<<"="<<factorial<<endl;
    return factorial;
}
int main(){
    factorial(5);
    return 0;
}