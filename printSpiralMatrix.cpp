#include <iostream>
#include <vector>
using namespace std;

void spiralOrder(vector<vector<int>> &v) {
    // Initialize boundaries for the matrix
    int top=0;
    int bottom=v.size()-1;
    int left=0;
    int right=v[0].size()-1;

    int direction=0; // 0: left->right, 1: top->bottom, 2: right->left, 3: bottom->top

    // Traverse the matrix in spiral order
    while (left<=right && top<=bottom) {
        // Traverse from left to right
        if (direction==0){
            for (int col=left; col<=right; col++) {
                cout<<v[top][col]<<" ";
            }
            top++; // Move the top boundary down
        }
        // Traverse from top to bottom
        else if (direction==1) {
            for (int row=top; row<=bottom; row++) {
                cout<<v[row][right]<<" ";
            }
            right--; // Move the right boundary left
        }
        // Traverse from right to left
        else if (direction==2) {
            for (int col=right; col>=left; col--) {
                cout <<v[bottom][col]<<" ";
            }
            bottom--; // Move the bottom boundary up
        }
        // Traverse from bottom to top
        else if (direction==3){
            for (int row=bottom; row>=top; row--) {
                cout<<v[row][left]<<" ";
            }
            left++; // Move the left boundary right
        }
        // Update the direction for the next traversal
        direction=(direction+1)%4;
    }
}

int main() {
    // Input the dimensions of the matrix
    int m, n;
    cout << "Enter the rows: ";
    cin >> m;
    cout << "Enter the columns: ";
    cin >> n;

    // Initialize the matrix
    vector<vector<int>> matrix(m, vector<int>(n));

    // Input the elements of the matrix
    cout<<"Enter the elements: ";
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin>>matrix[i][j];
        }
    }

    // Print the matrix in spiral order
    spiralOrder(matrix);

    return 0;
}
