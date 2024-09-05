#include<iostream>
#include<vector>
using namespace std;

int main(){

    cout<<"Enter the size: ";int n;
    cin>>n;
    vector<int> v(n+1,0);   //index starts from 1 acc to question

    for(int i=1; i<=n; i++){
        int ele;cin>>ele;
        v[i]=ele;
    }

    for(int i=1; i<=n; i++){
        v[i]+=v[i-1];
    }

    cout<<endl<<"Enter the number of queries: ";
    int q;cin>>q;

    while(q--){
        int l,r;
        cout<<endl<<"Enter starting and ending index: ";
        cin>>l>>r;

        cout<<endl<<"The sum from "<<l<<" and "<<r<<" is: "<<v[r]-v[l-1];
    }

    return 0;
}