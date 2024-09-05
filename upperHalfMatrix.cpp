#include <iostream>
#include <vector>
using namespace std;


void upperHalf(vector<vector<int>> &matrix, int m){

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(j>=i){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
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

    upperHalf(matrix,m);

    return 0;
}