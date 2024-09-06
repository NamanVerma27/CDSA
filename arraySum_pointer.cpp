#include<iostream>
using namespace std;

int main(){

    int n,sum=0;
    cout<<"Enter the size of an array: ";cin>>n;
    int arr[n];

    int *ptr=arr;   //declaring a pointer "ptr" and storing address of the firsst element of an array

    cout<<"Enter the elements of an array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        sum+=(*ptr++);
    }

    cout<<"The sum of elements of the array is: "<<sum<<endl;

    return 0;
}