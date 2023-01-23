#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, i = 0,answer=0;
    cout<<"Enter any binary number: "<<endl;
    cin>>n;
    //We are taking the binary no but the computer doesn't know it is binary so it assume it to be decimal so we have to divide the number by 10 and find the remainder.
    while(n!=0){
        int digit = n % 10;
        if(digit){
        answer = answer + pow(2,i);
        }
        n=n/10;
        i++;
    }

    cout<<"The decimal form is : "<<answer;
    return 0;
}