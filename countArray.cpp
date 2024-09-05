#include <iostream>
using namespace std;

int main() {
    int array[]={1,2,3,4,5};
    int countodd=0, counteven=0;
    int size = sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++) {
        if(array[i]%2==0){
            counteven+=1;
        } 
        else{
            countodd+=1;
        }
    }
    cout<<"Total even numbers are: "<<counteven<<endl;
    cout<<"Total odd numbers are: "<<countodd<<endl;

    return 0;
}
