#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=n/2 || i>(n/2+1)){
                if(j==(n/2+1)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}