//SPACES IN BETWEEN VARIENT

/*
            *
        *   *
    *   *   *
*   *   *   *
*/

#include<iostream>
using namespace std;
int main(){
    int control;
    int i,j,row=5;
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            cout<<" "<<"\t";
        }
        control = i;
        while (control!=0){
        cout<<"*"<<"\t";
        control--;
        }
        cout<<endl;
    }
    return 0;
}
