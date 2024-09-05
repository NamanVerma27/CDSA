#include <iostream>
#include <vector>
using namespace std;

int main(){

    int m, n;

    // Prompt the user to enter the number of rows and columns
    cout << "Enter the rows: ";
    cin >> m;
    cout << "Enter the cols: ";
    cin >> n;

    // Declare a 2D array with dimensions m x n
    int arr[m][n];

    // Prompt the user to enter the matrix elements
    cout << "Enter matrix elements: ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Vector to store the coordinates of zero elements in the matrix
    vector<pair<int,int>> ans;

    // Traverse the matrix to find all zero elements and store their coordinates
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0){
                ans.push_back(make_pair(i, j));
            }
        }
    }

    // For each zero element, set the entire row and column to zero
    for(auto p : ans) {
        int x = p.first; // Row index of zero element
        int y = p.second; // Column index of zero element
        for(int i = 0; i < m; i++){
            arr[i][y] = 0; // Set entire column y to zero
        }
        for(int j = 0; j < n; j++){
            arr[x][j] = 0; // Set entire row x to zero
        }
    }

    // Print the modified matrix
    cout << "The array is: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " "; // Print each element followed by a space
        }
        cout << endl; // New line after each row
    }

    return 0;
}
