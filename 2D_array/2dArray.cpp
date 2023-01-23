#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target, int row, int col){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == target)
            return 1;
        }
    }
    return 0;
}

void rowSum(int arr[][4], int row, int col){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is "<<sum<<endl;
    }

}

void largestRowSum(int arr[][4], int row, int col){
    int maxRowSum = 0;
    int index;
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if(sum > maxRowSum){
            maxRowSum = sum;
            index = i+1;
        }
    }

    cout<<"The largest Row Sum is "<<maxRowSum<<" of row "<<index;

}

void columnSum(int arr[][4], int row, int col){
    for(int i=0;i<col;i++){
        int sum = 0;
        for(int j=0;j<row;j++){
            sum += arr[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is "<<sum<<endl;
    }

}

int main(){
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //default initialization is row wise.

    //inside curly braces {} are the values of ith rows.
    // int arr[2][3] = {{1,11,111}, {2,22,222}};


    int arr[3][4];

    //taking input
    //row wise input.
   cout<<"Enter the elements of the arrray: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    largestRowSum(arr,3,4);
    // rowSum(arr,3,4);
    // columnSum(arr,3,4);



//    int target;
//    cout<<"Enter the element to search: "<<endl;
//    cin>>target;




   //column wise input
//    for(int col=0;col<4;col++){
//     for(int row=0;row<3;row++){
//         cin>>arr[row][col];
//     }
//    }


/*
    //print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    if(isPresent(arr,target,3,4)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
*/


    return 0;
}