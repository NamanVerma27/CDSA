#include <iostream>
using namespace std;

// Function to print a decrementing and incrementing pattern based on the input number
int diffPat(int n) {
    int num = n, i = 0;

    if (n<0) { // Base case
        cout<<n<<" ";
        return n;
    }
    i+=1;                      // increase the multiple of 5
    cout<<n<<" ";              // Print current value of n
    diffPat(num-i*5);          // Recursive call with n decreased by 5
    cout<<n<<" ";              // Print value of n again during unwinding

    return n;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    diffPat(n); // Call to print the pattern

    return 0;
}
