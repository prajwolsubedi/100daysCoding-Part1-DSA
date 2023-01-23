/*
*   *   *   *
    *   *   *
        *   *
            *
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row=6;
    for(i=1;i<=row;i++){
        int control = i;
        for(j=1;j<=i-1;j++){
            cout<<" "<<"\t";
        }
        while(control<=row){
            cout<<"*"<<"\t";
            control++;
        }
        cout<<endl;   
    }
    return 0;
}