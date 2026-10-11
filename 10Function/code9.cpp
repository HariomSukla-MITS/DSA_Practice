#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int bionomialcoff(int n, int r){
    int bionomialcoff=factorial(n)/(factorial(r)*factorial(n-r));
    return bionomialcoff;
}

int main(){
    cout<<bionomialcoff(5,2)<<endl;
    return 0;
}