/*
1   2   3
4   5   6
7   8   9
*/


#include<iostream>
using namespace std;
int main(){
    int i,j,row=5,count=1;
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
    }
    return 0;
}


