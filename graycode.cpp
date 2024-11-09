#include <iostream>
using namespace std;

// Recursive function to convert binary number `n` to Gray code
int binaryToGray(int n) {
    // Base case: if `n` is 0, the Gray code is also 0
    if (n == 0)
        return 0;
    
    // Recursive case: calculate Gray code of (n >> 1) and XOR it with n
    return (n ^ (n >> 1));
}

int main() {
    int n;
    cout << "Enter a binary number in decimal form: ";
    cin >> n;
    
    int grayCode = binaryToGray(n);
    cout << "The Gray code of " << n << " is: " << grayCode << endl;

    return 0;
}
