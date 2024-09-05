#include<iostream>
using namespace std;

int main(){

    int array[]={0,1,1,0,0,1};  //This solves the problem directly without counting the number of zeroes
    int size=6;int key=0;

    for(int i=0; i<size; i++){
        if(array[i]==0){
            int temp=array[i];
            array[i]=array[key];
            array[key]=temp;
            key++;
        }
    }

    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
}