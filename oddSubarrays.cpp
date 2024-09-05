#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4,5,6};
    int size=6;

    //prefix sum array
    for(int i=0; i<size; i++){
        array[i]+=array[i-1];
    }

    int countEven=0;int countOdd=0;int result=0;

    //count the number of subarrays with odd sum
    for(int i=0; i<size; i++){
        if(array[i]%2==0){      //if sum is even then find the number of odd sums
            countEven++;             //even-odd=odd
            result+=countOdd;
        }
        else{                   //if the sum is odd then find the number of even sums
            countOdd++;              //odd-even=odd
            result+=countEven+1;//if sum is odd then the sum itself will be counted as subarray with odd sum
        }
    }
    cout<<"Number of subarrays with odd sums are: "<<result<<endl;

    for (int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    

    return 0;
}