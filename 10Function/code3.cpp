#include <iostream>
using namespace std;

int sum(int a, int b){
int sum=a+b;
return sum;
}
int diff(int a, int b){
int diff=a-b;
return diff;
}

int main(){
int s=sum(2,5);
int d=diff(5,2);
cout<<"The sum is: "<<s<<endl;
cout<<"The Difference is: "<<d<<endl;
    return 0;
}