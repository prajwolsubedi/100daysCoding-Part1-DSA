//Write a program to find the first and last occurance of an element.
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
    int arr[7] = {14,2,2,2,2,2,2};
    int key = 2;
    int first = firstOccurance(key,arr,7);
    int last = lastOccurance(key,arr,7);
    cout<<"The first and last occurance of the element "<<key<<" is : "<<endl<<first<<" "<<last<<endl;
    return 0;
}