// concept of Derefrancing "Find out the value uses of address"
#include <iostream>
using namespace std;

int main(){
int a=20;
int *ptr=&a;
cout<<ptr<<endl;
cout<<*(ptr)<<endl;

// We can also modify the value of a
*ptr=10;
cout<<a;

    return 0;
}