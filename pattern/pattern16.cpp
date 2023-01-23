/*
            1           
        1   2   1
    1   2   3   2   1
1   2   3   4   3   2   1
*/

#include<iostream>
using namespace std;
int main(){
     int row = 5;
    int i,j,l;
    int count;
    for(i=1;i<=row;i++){
        count = i-1;
        for(j=1;j<=row-i;j++){
            cout<<" "<<"\t";
        }
        for(l=1;l<=i;l++){
            cout<<l<<"\t";
        }
        while(count){
            cout<<count--<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

