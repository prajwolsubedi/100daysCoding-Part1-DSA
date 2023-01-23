/*
1
2   1
3   2   1
4   3   2   1
*/


//Using count variable
#include<iostream>
using namespace std;
int main(){
    int i,j,row=4;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<i-j+1<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

