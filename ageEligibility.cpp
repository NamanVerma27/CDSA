#include<iostream>
using namespace std;

int eligibility(int age){
    if(age>=18){
        return 1;
    }
    return 0;
}

int main(){

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if (eligibility(age)) cout<<"You are eligible to vote"<<endl;
    else cout<<"You are not eligible to vote"<<endl;

    return 0;
}