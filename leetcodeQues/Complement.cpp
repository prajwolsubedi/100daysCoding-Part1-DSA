//WAP TO FIND THE COMPLEMENT OF BASE 10 INTEGER
/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
*/

#include<iostream>
using namespace std;
int findComplement(int x){
    if(x == 0)
    return 1;

    int m = x, ans,mask = 0;
    while(m!=0){
        mask = (mask<<1) | 1;
        m = m >> 1;
    }
    ans = (~x) & mask;
    return ans;
}
int main(){
    int n;
    cout<<"Enter any number to find the complement "<<endl;
    cin>>n;
    cout<<findComplement(n)<<endl;
    return 0;
}