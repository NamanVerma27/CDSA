#include <iostream>
using namespace std;

int prod(int n, int m) {
    // Base case: if m is zero, the product is zero
    if (m == 0) 
        return 0;
    
    // If m is positive, recursively add n to the result of recursiveProduct(x, y - 1)
    if (m > 0) 
        return n + prod(n, m - 1);
    
    // If m is negative, calculate for positive m and then negate the result
    return -prod(n, -m);
}

int main() {
    int n, m;
    cout << "Enter two numbers n and m: ";
    cin >> n >> m;
    
    cout << "The product of " << n << " and " << m << " is: " << prod(n, m) << endl;
    return 0;
}