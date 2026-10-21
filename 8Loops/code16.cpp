// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n";
//     cin>>n;
//     if(1*n&n*1){
//         cout<<n<<"="<<"Prime Num";
//     }
//     else{
//        cout<<n<<"="<<"non prime"; 
//     }
// return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<"isnon-prime"<<endl;
            break;
        }
        else{
            cout<<n<<"isprime"<<endl;
        }
    }
return 0;
}