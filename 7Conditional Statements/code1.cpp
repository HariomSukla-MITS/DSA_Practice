#include <iostream>
using namespace std;

// Coditional Statements
int main(){
int age;
cout<<"Enter Your Age:"<<endl;
cin>>age;

if(age>=18){
    cout<<"You Can Vote"<<endl;
}

//  if(age>=25){
//      cout<<"You are elageble for MP"<<endl;
//  }
else{
    cout<<"You Can't Vote"<<endl;
}
    return 0;
}