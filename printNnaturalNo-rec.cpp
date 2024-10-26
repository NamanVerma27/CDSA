#include <iostream>
using namespace std;

void printNat(int n){
    if (n<1) return;
    printNat(n-1);
    cout<<n<<" ";
}


int main(){

     int n;
     cout<<"Enter the number: ";
     cin>>n;
     printNat(n);

     return 0;
}