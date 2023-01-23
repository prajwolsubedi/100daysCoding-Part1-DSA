#include<iostream>
using namespace std;
int peakMountain(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int middle = start + (end - start) / 2;
    while(start <= end){
        if(arr[middle] > arr[middle+1]){
            if(arr[middle] > arr[middle-1])
                return middle;
            else{
            end = middle - 1;
            }
        }
        else{
        start = middle + 1;
        }
        middle = start + (end - start) / 2;
    }
    return -1;
}

int main(){
    int N;
    cout<<"Enter the size of an array: "<<endl;
    cin>>N;
    int arr[N];
    cout<<"Enter the element of an array: "<<endl;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int result = peakMountain(arr,N);
    if(result == -1)
    cout<<"Element is not present in the array"<<endl;
    else
    cout<<"The peak element is  "<<arr[result]<<" present at index "<<result<<endl;

}