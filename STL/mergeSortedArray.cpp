#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];  
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    //copy first array remaining element (if any)
        while(i<n)
        arr3[k++] = arr1[i++];

    //copy second array remaining element (if any)
        while(j<m)
        arr3[k++] = arr2[j++];      
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}

int main(){
    int arr1[2] = {6,7};
    int arr2[6] = {1,2,3,4,5,8};
    int arr3[8] = {0};
    merge(arr1,2,arr2,6,arr3);
    printArr(arr3,8);
    return 0;
}