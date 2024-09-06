#include <iostream>
using namespace std;

int main(){

    int n,k;
    cout<<"Enter the size of the array: ";cin>>n;
    cout<<"Enter the position of the array you want to find: ";cin>>k;
    int arr[n];

    cout<<"Enter the values of elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The element at "<< k <<"th position is: "<< *(arr+k-1)<<endl;

    return 0;
}