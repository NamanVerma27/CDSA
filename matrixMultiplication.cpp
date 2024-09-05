#include<iostream>
using namespace std;

int main(){

    // Read the dimensions for matrix 1
    cout<<"Enter the rows for matrix_1: ";
    int row1;cin>>row1;
    cout<<"Enter the columns for matrix_1: ";
    int col1;cin>>col1;

    // Declare matrix 1
    int a[row1][col1];

    // Input values for matrix 1
    cout<<"Enter the values for matrix_1: ";
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            int ele;cin>>ele;
            a[i][j]=ele;
        }
    }

    // Display matrix 1
    cout<<"Matrix_1 is: "<<endl;
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Read the dimensions for matrix 2
    cout<<"Enter the rows for matrix_2: ";
    int row2;cin>>row2;
    cout<<"Enter the columns for matrix_2: ";
    int col2;cin>>col2;

    // Declare matrix 2
    int b[row2][col2];

    // Input values for matrix 2
    cout<<"Enter the values: ";
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            int ele;cin>>ele;
            b[i][j]=ele;
        }
    }

    // Display matrix 2
    cout<<"Matrix_2 is: "<<endl;
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    int c[row1][col2]={0};// declare resultant matrix and initialize all elements to 0

    if(col1==row2){                          //a[row1][col1]*b[row2][col2]=c[row1][col2] if [col1]=row[2]
    // Perform matrix multiplication
        for(int i=0; i<row1; i++){          //i<row1 because result matrix will have row=row1
            for(int j=0; j<col2; j++){     //i<col2 because result matrix will have colums=col2
                c[i][j] = 0; // Initialize the element to 0 before summation
                for(int k=0; k<col1; k++){  //k<col1 or k<row2 will define how many multiplication of elements will take place
                    c[i][j]+=a[i][k]*b[k][j];// multiplication of elements
                }
            }
        }
    }

    // Display the result matrix
    if(col1==row2){
        cout<<"The resultant array is: "<<endl;
        for(int i=0; i<row1; i++){
            for(int j=0; j<col2; j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"The matrices can not be multiplied"<<endl;
    }


    return 0;
}