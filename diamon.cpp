#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the size of rows: ";
    int n;cin>>n;

    //loop to print upper triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){  //number of gaps= n-i per row
            cout<<" ";              //snipet to print the gaps
        }
        for(int j=1; j<=2*i-1; j++){    //number of letters= 2i-1 per row
            cout<<"*";                  //snipet to print letters
        }
        cout<<endl;
    }

    //loop to print lower triangle
    for(int i=n+1; i<=2*n-1; i++){
        for(int j=1; j<=i-n; j++){  //number of gaps=i-n per rows
            cout<<" ";              //snipet to print gaps
        }
        for(int j=1; j<=2*(2*n-i)-1; j++){  //number of letters=2(2n-i)-1 per rows
            cout<<"*";                      //snipet to print letters
        }
        cout<<endl;
    }

    return 0;
}