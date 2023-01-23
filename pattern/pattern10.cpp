/*
A
B   B
C   C   C
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row=4;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<char('A'+i-1)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}