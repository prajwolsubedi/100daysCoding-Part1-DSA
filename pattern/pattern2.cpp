/*
1   1   1   1
2   2   2  
3   3   
4
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row=5;
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i+1;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}



