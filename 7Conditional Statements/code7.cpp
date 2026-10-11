#include <iostream>
using namespace std;

//Largest of 3 nums
int main(){
int a,b,c;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value od b:";
cin>>b;
cout<<"Enter the vlue of c:";
cin>>c;
if((a>b)||(a>c)){
    cout<<"Largest num is a="<<a;
}
else if((b>a)||(b>c)){
    cout<<"Largest num is b="<<b;
}
else{
    cout<<"Largest num is c="<<c;
}

    return 0;
}

// or

// #include <iostream>
// using namespace std;

// //Largest of 3 nums
// int main(){
// int a,b,c;
// cout<<"Enter the value of a:";
// cin>>a;
// cout<<"Enter the value od b:";
// cin>>b;
// cout<<"Enter the vlue of c:";
// cin>>c;
// if((a>=b)&&(a>=c)){
//     cout<<"Largest num is a="<<a;
// }
// else if(b>=c){
//     cout<<"Largest num is b="<<b;
// }
// else{
//     cout<<"Largest num is c="<<c;
// }

//     return 0;
// }