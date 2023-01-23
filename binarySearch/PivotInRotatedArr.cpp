//Program to find pivot element in an array.
#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
    if(arr[mid] >= arr[0]){
        s = mid + 1;
    }
    else
    e = mid;
    mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[6] = {8,10,17,18,2,3};
    int result = getPivot(arr,6);
    cout<<"The pivot element of the array "<<arr[result]<<" in  index "<<result<<endl;
    return 0;
}