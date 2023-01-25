//Dynamic memory allocation for 2d array.
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row and column of an array "<<endl;
    cin >> row >> col;


    //Creation of 2d arrays using dynamic memory location
    int **arr = new int *[row];
    for(int i=0; i<col; i++){
        arr[i] = new int[col];
    }


    cout<<"Enter the elements of an array: "<<endl;

    //Taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The 2d array is : "<<endl;
    //Printing output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

//Releasing memory

//YOU HAVE TO ALWAYS REMEMBER TO RELEASE MEMORY MANUALLY IF YOU CREATE A MEMORY USING DYNAMIC MEMORY ALLOCATION
//first we have to release col and then row.

//releasing col part
    for(int i=0; i<col; i++){
        delete [] arr[i];
    }
    delete []arr;


cout<<arr[1][1];

    return 0;
}