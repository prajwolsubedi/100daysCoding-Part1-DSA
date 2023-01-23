/*
            1
        2   3
    4   5   6
7   8   9   10
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row=4;
    int count=1;
    for(i=1;i<=row;i++){
        int control = i;
        for(j=1;j<=row-i;j++){
            cout<<" "<<"\t";
        }
        while(control!=0){
            cout<<count<<"\t";
            count++;
            control--;
        }
        cout<<endl;   
    }
    return 0;
}