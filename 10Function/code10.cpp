#include <iostream>
using namespace std;

int sum(int a, int b){
    return (a+b);
}
int sum(double a, double b){
    return (a+b);
}
int ssum(int a, int b, int c){
    return(a+b+c);
}

int main(){
    cout<<sum(5, 10)<<endl;
    cout<<sum(5.5, 10.5)<<endl;
    cout<<ssum(5, 10, 15)<<endl;
    return 0;
}