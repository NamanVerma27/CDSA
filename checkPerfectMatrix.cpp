#include <iostream>
#include <vector>
using namespace std;

bool checkPerfectMatrix(vector<vector<int>> &matrix, int m){
    
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i==j && matrix[i][j]==0){
                return false; // checking diagonal elements to be 0
            }
            if(matrix[i][m-1-i]==0){
                return false; // checking non-anti-diagonal element to be 0
            }
            if (i != j && i + j != m - 1 && matrix[i][j] != 0) {
                return false; // Non-diagonal, non-anti-diagonal element is non-zero
            }
        }
    }
    return true;
}

int main(){

    int m;
    cout<<"Enter the rows and columns of the matrix: ";
    cin>>m;

    vector<vector<int>> matrix(m,vector<int>(m));

    cout<<"Enter the elements: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }

    bool tf=checkPerfectMatrix(matrix,m);
    cout<<tf<<endl;

    if(tf==true){
        cout<<"It is a perfect matrix";
    }
    else{
        cout<<"It is not a perfect matrix";
    }

    return 0;
}