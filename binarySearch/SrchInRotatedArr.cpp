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



int getKey(int arr[], int n, int pivot, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    if(key > arr[0]){
        
    }
}

int main(){
    int key = 2;
    int arr[6] = {8,10,17,18,2,3};
    int result = getPivot(arr,6);
    int final = getKey(arr,6,result,key);
    return 0;
}