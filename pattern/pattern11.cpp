/*
A
B   C
C   D   E
D   E   F   G
*/

#include<iostream>
using namespace std;
int main(){

    int i,j,row=4;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<char('A'+i+j-2)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}