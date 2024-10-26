#include <iostream>
using namespace std;

// Function to calculate the sum of first n natural numbers
int sumOfFirstN(int n) {
    return n * (n + 1) / 2; // Sum of first n natural numbers formula
}

// Recursive function to calculate m-th summation of first n natural numbers
int SUM(int n, int m) {
    if (m == 1) {
        return sumOfFirstN(n); // Base case: Return sum of first n natural numbers
    } else {
        int previousSum = SUM(n, m - 1); // Recursive call for m-1 summation
        return sumOfFirstN(previousSum); // Calculate sum of first `previousSum` natural numbers
    }
}

int main() {
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;

    cout << "SUM(" << n << ", " << m << ") = " << SUM(n, m) << endl;

    return 0;
}
