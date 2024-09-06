#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of an array: ";cin>>n;
    int arr[n][n];

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += *(*(arr + i) + i);
    }
    cout <<"The sum of diagonal elements are: "<< sum;

    return 0;
}