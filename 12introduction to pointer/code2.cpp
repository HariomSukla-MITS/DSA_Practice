#include <iostream>
using namespace std;

int main(){
int a=10;
int *ptr=&a;
int **pptr=&ptr;

cout<<&a<<"="<<ptr<<endl;
cout<<sizeof(ptr)<<endl;
cout<<&ptr<<"="<<pptr<<"\n";

    return 0;
}
// same to  same we can make char, flot, bool and other Data Tape also make.