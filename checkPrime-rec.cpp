#include <iostream>
using namespace std;

bool isPrime(int n, int m) {
    // Base case: if m is 1, then n is prime
    if (m == 1) 
        return true;

    // If n is divisible by m, then n is not prime
    if (n % m == 0)
        return false;

    // Recursive call to check for smaller divisors
    return isPrime(n, m - 1);
}

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    
    // Start checking from n-1
    bool result = isPrime(n, n - 1);

    // Output result
    if (result)
        cout << "The number " << n << " is prime." << endl;
    else
        cout << "The number " << n << " is not prime." << endl;

    return 0;
}