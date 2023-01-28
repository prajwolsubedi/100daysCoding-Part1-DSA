#include<iostream>
#include<math.h>
using namespace std;
int power(int a, int b){
    //base condition
    if(b == 0)
    return 1;

    if(b == 1)
    return a;

    //Recursive call 
    int ans = power(a,b/2);

    //odd
    if(b & 1){
        return a * ans * ans;
    }

    //even
    else{
        return ans * ans;
    }
}
int main(){
    int a,b;
    cout<<"Enter any number and its power"<<endl;
    cin>>a>>b;
    cout<<"The power of "<< a << " to " <<b<< " is "<< power(a,b)<<endl;

    return 0;
}