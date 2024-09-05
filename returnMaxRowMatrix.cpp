#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxRow(vector<vector<int>> &matrix, int &maxSum) {
    // Calculate prefix sums row-wise
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 1; j < matrix[0].size(); j++) {
            matrix[i][j] += matrix[i][j-1];
        }
    }
    
    int maxIndex = 0;
    int lastCol = matrix[0].size() - 1;
    for(int i = 0; i < matrix.size(); i++) {
        if(matrix[i][lastCol] > maxSum) {
            maxSum = matrix[i][lastCol];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int m, n;
    cout << "Enter the rows: ";
    cin >> m;
    cout << "Enter the columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the elements: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = INT_MIN;
    int maxIndex = maxRow(matrix, maxSum);
    cout << "The " << maxIndex + 1 << " row has the maximum sum which is " << maxSum << endl;

    return 0;
}