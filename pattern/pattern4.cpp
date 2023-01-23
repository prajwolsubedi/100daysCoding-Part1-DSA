/*
1
2   3
3   4   5
4   5   6   7
*/


//USING COUNT VARIABLE.

#include<iostream>
using namespace std;
int main(){
    int i,j,row=4;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<i+j-1<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

