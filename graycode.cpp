#include <iostream>
#include <cmath>
using namespace std;

// Helper function to calculate the Gray code of the binary number
int binaryToGray(int n) {
    // Base case: when n is 0 or 1, return n (as MSB will be the same)
    if (n == 0 || n == 1)
        return n;
    
    // Recursively calculate the Gray code of n-1
    int grayCode = binaryToGray(n / 2); // Recursively call for smaller values of n
    
    // The current Gray code is obtained by XORing n with the next bit of n
    int currentGrayCode = (n % 2) ^ ((n / 2) % 2);
    
    // Return the updated Gray code
    return currentGrayCode;
}

int main() {
    int n;
    cout << "Enter the binary number in decimal: ";
    cin >> n;
    
    cout << "The Gray code of " << n << " is: " << binaryToGray(n) << endl;
    return 0;
}
