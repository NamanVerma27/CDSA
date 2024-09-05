#include <iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4,5};
    int n=5;    //n=size

    int ansArray[n];    //solving problem using extra memory i.e new array
    int j=0;

    int k;
    cout<<"Enter the number for rotation: ";
    cin>>k;
    k=k%n;  //because k can be larger than n i.e 5 here

    for(int i=n-k; i<n; i++){
        ansArray[j++]=array[i];
    }
    for(int i=0; i<n-k; i++){
        ansArray[j++]=array[i];
    }

    cout<<"The rotated array is: ";
    for(int i=0; i<n; i++){
        cout<<ansArray[i];
    }
}