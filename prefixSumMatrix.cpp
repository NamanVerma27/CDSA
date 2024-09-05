#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector<vector<int>> &matrix){

    // prefix sum row wise
    for(int i=0; i<matrix.size(); i++){
        for(int j=1; j<matrix[0].size(); j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }

    // prefix sum column wise
    for(int i=1; i<matrix.size(); i++){
        for(int j=0; j<matrix.size(); j++){
            matrix[i][j]+= matrix[i-1][j];
        }
    }

    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
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

    prefixSum(matrix);

    return 0;
}