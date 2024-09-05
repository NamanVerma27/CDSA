#include<iostream>
using namespace std;

int main(){

    int n1=1001,n2=0b100;
    int position=1;
    int ans=0,parity;

    while(n1){
        parity=n1%10;
        ans+=parity*position;
        position*=2;
        n1/=10;
    }
    cout<<ans<<endl;
    int ans1=0;
    position=1;
    
    while(n2){
        parity=n2%10;
        ans1+=parity*position;
        position*=2;
        n2/=10;
    }
    cout<<ans1<<endl;

    if(ans1>ans){
        cout<<ans1<<" is greater number"<<endl;
    }
    else cout<<ans<<" is greater number"<<endl;

    return 0;
}