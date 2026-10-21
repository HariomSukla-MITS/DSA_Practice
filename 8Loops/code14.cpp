// #include <iostream>
// using namespace std;

// int main(){
// int n;
// cout<<"Enter the value of n";
// cin>>n;
// for(int i=1; i<=10; i++){
//     cout<<n*i<<endl;
// }

//     return 0;
// }

//or

#include <iostream>
using namespace std;

int main(){
int n;
do{
cout<<"Enter the value of n";
cin>>n;
if(n%10==0){
    break;
}
cout<<"you Enterned"<<n<<endl;
} 
while(true);


    return 0;
}