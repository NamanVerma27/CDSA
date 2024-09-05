#include <iostream>
using namespace std;

int main() {
    
    int m;
    cout<<"Enter the rows: ";cin>>m;
    int arr[m][m];
    
    for(int i=0; i<m; i++){
        for(int j=0;j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    //transpose of array
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){ //diagonal element are not swaped so they will be left undisturbed
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    
    //reverse each row
    for(int i=0; i<m;i++){
        for(int j=0; j<m/2; j++){ //to swap row elements only once
            int temp=arr[i][j];
            arr[i][j]=arr[i][m-1-j];
            arr[i][m-1-j]=temp;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0;j<m; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}