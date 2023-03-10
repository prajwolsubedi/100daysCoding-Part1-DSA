//Wap to check if array is sorted or not using recursion
#include<iostream>
using namespace std;
bool isSorted(int *arr, int n){
    //Base case
    if(n < 2)
    return 1;

    if(arr[n-2] > arr[n-1])
    return 0;

    else{
        int ans = isSorted(arr,n-1);
        return ans;
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int ans = isSorted(arr,10);
    if(ans == 1)
    cout<<"The given array is sorted "<<endl;
    else
    cout<<"The given array is not sorted "<<endl;
    return 0;
}