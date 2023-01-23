#include<iostream>
using namespace std;
int binarySearch(int key, int arr[], int size){
    int start = 0;
    int end = size-1;
    int found = 0;
     //for optimization if start and end are large values then their sum  cannot be stored in int so we use this formula.
    int middle = start + (end - start) / 2;
    while(start<=end)
    {
        if(key == arr[middle]){
            return middle;
        }
        else if(key > arr[middle]){
            start = middle+1;
        }
        else if(key < arr[middle]){
            end = middle-1;
        }
        middle = start + (end - start) / 2;
    }
return -1;
}
int main(){
    int element;
    cout<<"Enter the element you want to find: "<<endl;
    cin>>element;
    int arr[6] = {9, 99, 999, 9999, 99999, 999999};
    int result = binarySearch(element,arr,6);   
    if(result == -1)
    cout<<"Element not found in the array"<<endl;
    else
    cout<<"Element found at position "<<result+1<<endl;
    return 0;
}