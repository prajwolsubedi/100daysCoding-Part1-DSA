//You have given a number of stairs. Initially, you are at 0th stair, and you need to reach to the Nth stair.
//Each time you can either climb one step or two steps. You are supposed to return the number of distint ways in 
//which you can climb from the 0th step to the Nth step.

#include<iostream>
using namespace std;
int climbStairs(int n){
    //Base Criteria.
    if(n == 0)
    return 1;
    if(n < 0)
    return 0;

    //Recursive relation.
    return climbStairs(n-1) + climbStairs(n-2);
}
int main(){
    int n;
    cout<<"Enter the no of stairs: "<<endl;
    cin>>n;

    cout<<"The result is : "<<climbStairs(n)<<endl;
    return 0;
}