#include<iostream>
using namespace std;

int main(){

    int n=1,ans=0,position=1,parity,temp;
    while(n<=5){
        position=1;
        ans=0;
        temp=n;
        while(temp){
            parity=temp%2;
            ans+=parity*position;
            position*=10;
            temp/=2;
        }
        cout<<ans<<" "<<endl;
        n++;
    }

    return 0;
}