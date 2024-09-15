#include<iostream>
using namespace std;

int expOptimized(int n, int q){
    if(q==0) return 1;
    if(q%2==0){
        // if power is even
        int result=expOptimized(n,q/2);    // 2^16 = 2^8 * 2^8
        return result*=result;
    }
    else{
        // if power is odd
        int result=expOptimized(n, (q-1)/2);
        return result= n * result * result;    // 2^17 = 2 * 2^8 * 2^8
    }
}

int main(){

    int n,q;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the exponent: ";
    cin>>q;

    cout<<"Exponent result : "<<expOptimized(n,q)<<endl;

    return 0;
}