#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the maximum hourglass sum in a matrix
int maxHourglassSum(vector<vector<int>> &matrix, int m, int n) {
    int maxSum = INT8_MIN; // Variable to store the maximum sum of an hourglass
    int currentSum = 0;   // Variable to store the current sum of an hourglass

    // Iterate over possible top-left corners of hourglasses
    for (int i = 0; i <= m - 3; i++) { // i ranges from 0 to m-3
        for (int j = 0; j <= n - 3; j++) { // j ranges from 0 to n-3
            currentSum = 0; // Reset currentSum for each new hourglass

            // Add the top row of the hourglass
            for (int k = j; k < j + 3; k++) {
                currentSum += matrix[i][k];      // Top row elements
                currentSum += matrix[i + 2][k];  // Bottom row elements
            }
            // Add the middle element of the hourglass
            currentSum += matrix[i + 1][j + 1];

            // Update the maximum sum found so far
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    return maxSum;
}

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    // Declare a 2D array (matrix) with m rows and n columns
    vector<vector<int>> matrix(m, vector<int>(n));

    // Read the elements of the matrix from the user
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    // Call the user-defined function to find the maximum hourglass sum
    int maxSum = maxHourglassSum(matrix, m, n);

    // Output the maximum hourglass sum
    cout << "The maximum hourglass sum is: " << maxSum << endl;

    return 0;
}
