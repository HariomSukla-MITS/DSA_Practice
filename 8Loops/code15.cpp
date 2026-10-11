// #include <iostream>
// using namespace std;

// int main(){
// for(int i=1;i<=10;i++){
//     if(i==3){
//         continue;
//     }
//     cout<<i<<endl;
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
    continue;
}
cout<<"you Enterned"<<n<<endl;
} 
while(true);


    return 0;
}