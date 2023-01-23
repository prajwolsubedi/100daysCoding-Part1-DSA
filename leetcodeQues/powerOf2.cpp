//Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.



//Brute force technique worst time complexity 
//THERE ARE OPTIMISED CODE FOR THIS PROBLEM.

#include<iostream>
#include<math.h>
using namespace std;
bool isPowerOfTwo(int x){
    int i;
        //range
        for(i=0;i<=30;i++){
        if (x == pow(2,i)){
            return true;
        }
    }
    return false;
}

int main(){

    int n,i;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    cout<<isPowerOfTwo(n);

    return 0;
}





