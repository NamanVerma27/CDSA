#include<iostream>
using namespace std;

int isprime(int i){
    for(int p=2;p<i;p++){
        if(i%p==0) return 0;
    }
    return 1;
}

int main(){

    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"The prime numbers between "<<n1<<" and "<<n2<<" are: ";

    for(int i=n1;i<=n2;i++){
        if(isprime(i)) cout<<i<<" ";
    }

    return 0;
}