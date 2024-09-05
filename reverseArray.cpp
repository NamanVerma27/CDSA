#include <iostream>
using namespace std;

int main() {
    int array1[]={1,2,3,4,5};
    int size = sizeof(array1)/sizeof(array1[0]);
    int array2[size]={};

    for(int i=0;i<size;i++) {
        array2[i]=array1[size-1-i];
    }
    cout<<"Reverse of an array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<array2[i]<<" ";
    }
    return 0;
}
