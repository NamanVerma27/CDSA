#include <iostream>
using namespace std;


int main() {
   
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0, x=7;
    bool found=false;
   
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            sum=arr[i]+arr[j];
            if(sum==x){
                if(found){
                    cout<<" "<<"&"<<" ";
                }
                cout<<arr[i]<<","<<arr[j];
                found=true;
            }
        }
    }
    
    return 0;
}
