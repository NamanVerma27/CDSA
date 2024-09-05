#include <iostream>
#include <vector>
using namespace std;

void rectangleSum(vector<vector<int>> &matrix){
    int r1, r2, c1, c2;
    cout << "Enter row1, row2, column1, column2: ";
    cin >> r1 >> r2 >> c1 >> c2;

    // Compute prefix sum row-wise
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 1; j < matrix[0].size(); j++){
            matrix[i][j] += matrix[i][j-1];
        }
    }

    // Compute prefix sum column-wise
    for(int i = 1; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            matrix[i][j] += matrix[i-1][j];
        }
    }

    // Initialize sums for area calculations
    int top_sum = 0, left_sum = 0, topleft_sum = 0;

    // Sum of elements above the rectangle
    if(r1 > 0) top_sum = matrix[r1-1][c2];
    // Sum of elements to the left of the rectangle
    if(c1 > 0) left_sum = matrix[r2][c1-1];
    // Sum of elements to the top-left of the rectangle
    if(r1 > 0 && c1 > 0) topleft_sum = matrix[r1-1][c1-1];

    // Calculate total sum using inclusion-exclusion principle
    int total_sum = matrix[r2][c2] - top_sum - left_sum + topleft_sum;
    cout << "The sum from (" << r1 << "," << c1 << ") to (" << r2 << "," << c2 << ") is: " << total_sum << endl;
}

int main() {
    int m, n;
    cout << "Enter the rows of the matrix: ";
    cin >> m;
    cout << "Enter the columns of the matrix: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the elements: ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){ // Corrected the loop to read n columns
            cin >> matrix[i][j];
        }
    }

    rectangleSum(matrix);

    return 0;
}
