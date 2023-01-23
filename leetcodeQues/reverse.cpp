//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<iostream>
using namespace std;
int reverse(int n){
    int ans=0,rem;
        while(n!=0){
        rem = n % 10;
        //setting limit and interger is of 32 bit and it cannot be more than the range [-2^31 to 2^31 - 1]
        if((ans < INT32_MIN/10)|| (ans > INT32_MAX/10)){
            return 0;
        }
        ans = (ans * 10) + rem;
        n /= 10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int result = reverse(n);
    cout<<"The reverse of a number is "<<result<<endl;
    return 0;
}