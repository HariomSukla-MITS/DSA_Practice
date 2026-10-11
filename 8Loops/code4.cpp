#include <iostream>
using namespace std;

// sum of first n natural num
int main(){
int n;

cout<<"Enter the value of n"<<endl;
cin>>n;
int sum=0;


for(int i=1; i<=n; i++ ){
    sum=sum+i;

}
cout<<"sum="<<sum;



    return 0;
}