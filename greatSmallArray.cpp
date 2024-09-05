#include <iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4,5};
    int min=array[0],max=array[0];
    int size=sizeof(array)/sizeof(array[0]);

    for(int i=1;i<size;i++){
        if(array[i]<min){
            min=array[i];
        }
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"The sum of min and max number is "<<(max+min)<<endl;

    return 0;
}