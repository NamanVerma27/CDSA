#include <iostream>
using namespace std;

int main() {
    int array[]={8,6,4,2,3,5,0,1};
    int size= sizeof(array)/sizeof(array[0]);

    int min=array[0];
    int max=array[0];
    int totalSum=array[0];

    for (int i=1; i<size; i++) {
        totalSum+=array[i];
        if (array[i]<min) {
            min=array[i];
        }
        if (array[i]>max) {
            max=array[i];
        }
    }

    int expectedSum=(max * (max + 1) / 2) - (min * (min - 1) / 2);
    int missingNumber = expectedSum - totalSum;

    cout << "The missing number between " << min << " and " << max << " is: " << missingNumber << endl;

    return 0;
}
