#include<iostream>
using namespace std;
int power(int n, int x){
    //Base condtion
    if(x == 0)
    return 1;

    //recursive relation
    return n * power(n, x-1 );
}
int main(){
    int n,x;
    cout<<"Enter any number and its power"<<endl;
    cin>>n>>x;
    cout<<"The power of "<< n << " to " <<x << " is "<< power(n,x)<<endl;

    return 0;
}