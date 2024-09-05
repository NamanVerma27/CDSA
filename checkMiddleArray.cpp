#include <iostream>
using namespace std;

int main(){
    
    int arr[]={1,6,5,7,10,8,9};
    int size= sizeof(arr)/sizeof(arr[0]);
    int check;

    for(int i=0; i<size; i++){
        if(arr[i]<arr[i+1] && arr[i]>arr[i-1]){
            check=arr[i];
        }
    }
    cout<<check<<endl;

    return 0;
}