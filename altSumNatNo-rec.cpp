#include <iostream>
using namespace std;

int sumNat(int n){
    if (n<1) return 0;
    return sumNat(n-1) + ((n%2==0)?-n:n);
}

int main(){

     int n;
     cout<<"Enter the number: ";
     cin>>n;
     cout<<sumNat(n);

     return 0;
}