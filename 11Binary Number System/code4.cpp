#include <iostream>
using namespace std;

void binToDec(int BinNum){
int n=BinNum;
int decnum=0;
int pow=1; // 2^0 2^1 2^2

while(n>0){
    int lastDig = n%10;
    decnum += lastDig* pow;
    pow= pow*2;
    n=n/10;

}
cout<<decnum<<endl;
}

int main(){

binToDec(101);
    return 0;
}