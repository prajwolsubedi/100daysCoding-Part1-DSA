//WAP to implement binary search using recursion.
#include<iostream>
using namespace std;
bool binarySearch(int *arr, int s, int e, int key){
    //Base case
    if(s>e)
    return 0;

    //Solve one Case
    int mid = s + (e-s) / 2;
    if(key == arr[mid]){
        return 1;
    }

    if(key > arr[mid]){
        s = mid + 1;
        return binarySearch(arr,s,e,key);
    }

    else{
        e = mid - 1;
        return binarySearch(arr,s,e,key);
    }
    
}
int main(){
    int result,key;
    int arr[9] = {1,2,3,4,5,77,88,99,101};
    cout<<"Enter the element you want to search: "<<endl;
    cin>>key;
    result = binarySearch(arr,0,8,key);
    // result = binarySearch(arr,5,key,0);
    if(result == 1)
    cout<<"Element is present in the array. "<<endl;
    else{
        cout<<"Element is not present in the array"<<endl;
    }
    return 0;
}