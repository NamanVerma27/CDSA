#include <iostream>
#include <vector>
using namespace std;

//Solves using combination formula

// Function to calculate the factorial of a number
int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate combination C(i, j) = i! / (j! * (i - j)!)
int combination(int i, int j) {
    return factorial(i) / (factorial(j) * factorial(i - j));
}

int main() {
    int n;
    cout << "Enter the size of the triangle: ";
    cin >> n;

    // Vector to store Pascal's triangle
    vector<vector<int>> ans(n);

    // Generate Pascal's triangle
    for(int i = 0; i < n; i++) {
        ans[i].resize(i + 1); // Resize each row to the correct size
        for(int j = 0; j <= i; j++) {
            ans[i][j] = combination(i, j);
        }
    }

    // Print Pascal's triangle
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
