/*
Triangle pattern.

*
*   *
*   *   *
*   *   *   *

*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }
    return 0;
}