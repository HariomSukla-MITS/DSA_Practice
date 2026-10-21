#include <iostream>
using namespace std;

//  elseif statements
int main(){
int marks;
cout<<"Enter Your Marks:"<<endl;
cin>>marks;
if(marks>=90){
    cout<<"A"<<endl;
}
else if(marks>=75){
    cout<<"B"<<endl;
}
else if(marks>=60){
    cout<<"C"<<endl;
}
else if(marks>=33){
    cout<<"D"<<endl;
}
else{
    cout<<"Fail"<<endl;
}

    return 0;
}