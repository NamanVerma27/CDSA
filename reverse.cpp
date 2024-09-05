#include<iostream>
using namespace std;

int main(){


    int n,lastdigit,reverse=0;
    cout<<"Enter the number: ";
    cin>>n;

    while(n){
        lastdigit=n%10;
        reverse=(reverse*10)+lastdigit;
        n/=10;
    }
    cout<<"Reverse of the number is "<<reverse<<endl;

    return 0;
}