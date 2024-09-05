#include <iostream>
using namespace std;

void sortThem(int array[], int size){   //problem solves using manipulation

    int count_zeroes=0;

    for(int i=0; i<size; i++){  //count the number of zeroes
        if(array[i]==0){
            count_zeroes++;
        }
    }

    for(int i=0; i<size; i++){  //fill 0 in the array if i<number of zeroes
        if(i<count_zeroes){
            array[i]=0;
        }
        else array[i]=1;
    }

}

int main(){

    int size;
    cout<<"Enter the size of array: ";cin>>size;

    int array[size];
    cout<<endl<<"Enter the elements: ";

    for(int i=0; i<size; i++){
        int ele; cin>>ele;
        array[i]=ele;
    }

    sortThem(array,size);

    cout<<"The sorted array is ";

    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}