//Recursion program to find factorial

#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0)
    //This is the base case when recursion stops and return in mandatory in base case.
    return 1;

    return (n * factorial(n-1));
}
int main(){
    int n;
    cout<<"Enter any number to find the factorial : "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is : "<<factorial(n)<<endl;
    return 0;
}