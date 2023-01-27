//WAP to implement binary search using recursion.
#include<iostream>
using namespace std;
bool binarySearch(int *arr, int size, int key, int s){
    int e = size - 1;
    int mid = (s + e) / 2;

    if(size == 0)
    return 0;

    if(key == arr[mid])
    return 1;

    if(key > arr[mid]){
        int ans1 = binarySearch(arr,size,key,mid+1);
        return ans1;
    }

    else{
        int ans = binarySearch(arr,size-mid,key,s);
        return ans;
    }

}
int main(){
    int result,key;
    int arr[5] = {1,2,3,4,5};
    cout<<"Enter the element you want to search: "<<endl;
    cin>>key;
    result = binarySearch(arr,5,key,0);
    // cout<<((result) == 1) ? "Present" : "Not Present";
    cout<<result;
    return 0;
}