#include <iostream>
using namespace std;

void DecToBin(int DecNum){
int  n=DecNum;
int pow=1;
int binNum=0;

while(n>0){
    int rem=DecNum %2;
    binNum +=rem*pow;
    n=n/2;
    pow=pow*10;
}
cout<< binNum<<endl;
}


int main(){
DecToBin(7);

    return 0;
}