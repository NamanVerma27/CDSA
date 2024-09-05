#include <iostream>
using namespace std;

int binarysearch(int arr[], int size ,int key){
    int start=0,end=size-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){

    int even[6]={2,4,6,8,12,45};
    int odd[5]={2,4,6,9,34};
    int evenindex=binarysearch(even,6,12);
    cout<<"The number in even array is found at the index: "<<evenindex<<endl;

    int oddindex=binarysearch(odd,5,9);
    cout<<"The number in odd array is found at the index: "<<oddindex<<endl;

    return 0;
}