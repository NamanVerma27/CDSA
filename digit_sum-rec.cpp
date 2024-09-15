#include<iostream>
using namespace std;

int digitSum(int n){
    if((n>=0) & (n<=9)) return n;
    return digitSum(n/10) + n%10;
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The sum of digits of the number: "<<digitSum(n)<<endl;

    return 0;
}