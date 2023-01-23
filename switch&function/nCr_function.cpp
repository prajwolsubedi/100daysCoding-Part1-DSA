//WRITE A FUNCTION TO FIND THE COMBINATION OF THE NUMBER.
// i.e nCr

#include<iostream>
using namespace std;

int factorial(int n){
    if(n>0)
    return n * factorial(n-1);
    return 1;   //it will be automaticall return if n = 0 i.e if if(statemet) is false.
    //if we return without any value it will simply return back to the function.
}

int nCr(int n, int r){
    int numerator = factorial(n);

    int denominator = factorial(r) * factorial(n-r);

    return numerator / denominator;

}

int main(){
    int a,b;
    cout<<"Enter any two numbers: "<<endl;
    cin>>a>>b;
    int result = nCr(a,b);
    cout<<result;
    return 0;
}