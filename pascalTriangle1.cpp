#include<iostream>
#include<vector>
using namespace std;

//Solves using convention method

vector<vector<int>> pascalTriangle(int n){ //Generate pascal triangle
    vector<vector<int>> pascal(n); //initialize 2d vector pascal with size n

    for(int i=0; i<n; i++){
        pascal[i].resize(i+1); //resize each row
        for(int j=0; j<=i; j++){
            if(j==0 || j==i) pascal[i][j]=1;
            else pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
        }
    }

    return pascal;
}

int main(){

    int n;
    cout<<"Enter the size of pascal triangle: ";
    cin>>n;

    vector<vector<int>> ans;
    ans= pascalTriangle(n); //give ans vector the value of pascal triangle

    //print the pascal triangle
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){ //iterate each column upto i
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}