#include <iostream>
using namespace std;


int maxElement(int array[], int size){
    int max=INT8_MIN;

    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}

int secondMax(int array[],int size){
    int max1=maxElement(array, size);   //max1= largest element
    int max=INT8_MIN;                   //max= second largest element

    for(int i=0; i<size; i++){
        if(array[i]>max && array[i]!=max1){
            max=array[i];
        }
    }
    return max;
}

int main(){

    int array[]={2,3,5,7,6,1,7};
    int size=7;

    int largestElement=maxElement(array,size);
    cout<<"Max element is "<<largestElement<<endl;

    int secondLargest=secondMax(array,size);
    cout<<"Second max element is "<<secondLargest<<endl;

    return 0;
}