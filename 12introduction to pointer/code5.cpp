// Pass by value

#include <iostream>
using namespace std;

void changeA(int a){
   
    cout<<a<<endl;
}
int main(){
int a=10;
changeA(20);
cout<<a<<endl;

    return 0;
}

