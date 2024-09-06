#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of an array: ";cin>>n;
    int arr[n];

    int *ptr=arr+(n-1);   //declaring a pointer "ptr" and storing address of the last element of an array

    cout<<"Enter the elements of an array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array in reverse order: "<<endl;
    for(int i=0; i<n; i++){     //printing array in reverse order
        cout<<*ptr--<<" ";
    }

    return 0;
}