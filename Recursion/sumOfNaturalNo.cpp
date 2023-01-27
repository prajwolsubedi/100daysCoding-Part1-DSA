//Recursion program to find the sum upto the given natural number.
#include<iostream>
using namespace std;
int sumNatural(int n){
    //base case
    if(n==0)
    return 0;

    //recursive relation
    return n + sumNatural(n-1);
}
int main(){
    int n;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    cout<<"The sum upto "<<n<<" is "<<sumNatural(n)<<endl;
    return 0;
}