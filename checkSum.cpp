#include <iostream>
using namespace std;

int main(){

    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int size= sizeof(a)/sizeof(a[0]);
    int sum=0,check=99;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            sum=a[i]+b[j];
            if(sum<check){
                check=sum;
            }
        }
    }
    cout<<"The lowest sum possible from both arrays is "<<check<<endl;

    return 0;
}