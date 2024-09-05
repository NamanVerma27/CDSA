#include <iostream>
#include <vector>
using namespace std;

// Function to check if two numbers are equal
bool equalitycheck(int n, int ch) {
    if (n == ch) return true;
    return false;
}

int main() {
    int m, n;
    cout << "Enter the rows: ";
    cin >> m;
    cout << "Enter the columns: ";
    cin >> n;

    // Declare a 2D vector (matrix) with m rows and n columns
    vector<vector<int>> mat(m, vector<int>(n));

    // Input the elements of the matrix
    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int diagCount = 0, checkCount = 0;

    // Check if all the elements in the diagonal are the same
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) { // Check if the element is on the diagonal
                if(equalitycheck(mat[i][j], mat[0][0])) { // Compare with the first diagonal element
                    checkCount++; // Count matching diagonal elements
                }
                diagCount++; // Count total diagonal elements
            }
        }
    }

    // Output the result
    if(checkCount == diagCount) {
        cout << "All the elements in diagonal are same" << endl;
    } else {
        cout << "All the elements in diagonal are not same" << endl;
    }

    return 0;
}
