#include<iostream>
using namespace std;
int main(){
    //Initializing array with some default values.
    int a[5] = {[0 ... 4] = 99};
    int size = sizeof(a)/sizeof(int);
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    char c[5] = {'a','b','c','d','e'};
    cout<<c[1];

}