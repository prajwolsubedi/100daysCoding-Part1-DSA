//Wapt that returns sum of all elements of array using recursion.
#include<iostream>
using namespace std;
int getSum (int *arr, int n){
    //Base criteria
    if(n == 0){
        return 0;
    }
    return arr[n-1] + getSum(arr,n-1);
}
int main(){
    // int arr[5] = {2,4,9,9,9};
    int arr[5] = {2,1,3,5,4};
    cout<<getSum(arr,5)<<endl;
    return 0;
}