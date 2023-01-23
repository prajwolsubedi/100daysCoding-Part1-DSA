//wap to do spiral traversing of an array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> > matrix(3, vector<int>(4));
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    cout<<"Enter the elements of the array: "<<endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
}

    int count = 0;
    int totalElement = row * col;
    int index;

    //Index initialization.
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while(count < totalElement){
        //print starting row
        for(int index=startingCol ;count<totalElement && index<=endingCol;index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //print ending column
        for(int index=startingRow;count<totalElement &&  index<=endingRow;index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //print ending row
        for(int index=endingCol;count<totalElement && index>=startingCol;index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //print starting column
        for(int index=endingRow;count<totalElement && index>=startingRow;index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    cout<<"Ans incoming ---"<<endl;

    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}