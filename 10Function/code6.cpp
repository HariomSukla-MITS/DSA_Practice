#include <iostream>
using namespace std;

void func(int n){
    if(n%2==0){
        cout<<"Even Numver"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }
}


int main(){
    func(2);
    return 0;
}

// 2nd approch (mem)


// #include <iostream>
// using namespace std;

// bool isEven(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     cout << isEven(2) << endl;
//     return 0;
// }