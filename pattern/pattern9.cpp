/*
D
C   D
B   C   D
A   B   C   D
*/



#include<iostream>
using namespace std;
int main(){

    int i,j,row=3;
    for(i=1;i<=row;i++){
        char start = 'A' + i -1;
        for(j=1;j<=row;j++){
            cout<<char(start + j -1)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

