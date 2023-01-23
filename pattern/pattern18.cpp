//Pascals triange

#include<iostream>
using namespace std;
int main(){

    int i,j,l,row=6;
    for(i=0;i<=row;i++){
        int coff = 1;
        for(j=row-i;j>0;j--){
            cout<<" ";
        }
        for(l=1;l<=i;l++){
            cout<<coff<<" ";
            coff = coff * (i-l) /l;
        }
        cout<<endl;
    }
    return 0;
}
