#include <iostream>
using namespace std;

int Bin(int n, int pos) {
    // Base case: if n is 0 or 1, return n * position
    if (n == 0 || n == 1) 
        return n * pos;
    
    // Recursive case: calculate binary and adjust position
    pos *= 10;
    int bin = ((n % 2) * pos) + Bin(n / 2, pos);
    return bin;
}

int main() {
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    
    cout << "The binary conversion of " << n << " is: " << Bin(n, 1) << endl;
    return 0;
}