/*
D
C   D
B   C   D
A   B   C   D
*/


#include<iostream>
using namespace std;
int main(){

    int i,j,row=5;
    for(i=1;i<=row;i++){
    char start = 'A' + row - i;
        for(j=1;j<=i;j++){
            cout<<char(start + j-1)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}