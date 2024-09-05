#include<iostream>
using namespace std;

int main(){

    int n,parity,bin=0,position=1,sum=0,result;
    cout<<"Enter the number: ";
    cin>>n;

    while(n){
        parity=n%2;
        bin+=parity*position;
        position*=10;
        n/=2;
    }
    cout<<bin<<endl;
    
    while(bin){
        result=bin%10;
        if(result==0){
            sum+=1;
        }
        bin/=10;
    }
    cout<<"Number of zeroes are "<<sum<<endl;

    return 0;
}