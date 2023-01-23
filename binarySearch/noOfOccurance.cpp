#include<iostream>
using namespace std;
int firstOccurance(int key, int arr[], int size){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int middle = start + (end - start) / 2;
    while(start<=end)
    {
        if(key == arr[middle]){
            ans = middle;
            end = middle - 1;
        }
        else if(key > arr[middle]){
            start = middle+1;
        }
        else if(key < arr[middle]){
            end = middle-1;
        }
        middle = start + (end - start) / 2;
    }
return ans;
}

int lastOccurance(int key, int arr[], int size){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int middle = start + (end - start) / 2;
    while(start<=end)
    {
        if(key == arr[middle]){
            ans = middle;
            start = middle + 1;
        }
        else if(key > arr[middle]){
            start = middle+1;
        }
        else if(key < arr[middle]){
            end = middle-1;
        }
        middle = start + (end - start) / 2;
    }
return ans;
}
int main(){
    int arr[7] = {2,2,2,2,2,2,3};
    int key = 24;
    int first = firstOccurance(key,arr,7);
    int last = lastOccurance(key,arr,7);
    if(first == -1){
        cout<<"Element is not present in the array"<<endl;
    }
    else
    cout<<"The total no of Occurance is "<<last-first+1<<endl;
    return 0;
}