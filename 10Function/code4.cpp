#include <iostream>
using namespace std;

int sum(int a, int b){     // Parameters   // b=1 
    int sum=a+b;
    return sum;
}
int main(){
    int s=sum(2,5);        //  Arguments // int s=sum(2) but We can't take Default value of a.
    cout<<"The sum is: "<<s<<endl;
    return 0;
}