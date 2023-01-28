//Wap to implement quick sort using recursion
#include<iostream>
using namespace std;


int partition(int *arr, int s, int e){

    int mincount = 0;
    //To swap use arr[s] because pivot only have the copy of value in arr[s] not the address
    int pivot = arr[s];
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot)
        mincount++;
    }

    //Pivot at right index.
    int pivotIndex = mincount + s;
    swap(arr[pivotIndex],arr[s]);

    // Swap the smaller element with bigger;
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr,int s, int e){
    int mid = s + (e-s)/2;

    //Base case
    if(s >= e)
    return ;


    //Partition the array
    int position = partition(arr,s,e);

    //Sort left part
    quickSort(arr,s,position-1);

    //Sort right part
    quickSort(arr,position+1,e);

}

int main(){
    int arr[10] = {10,9,3,5,1,9,6,9,9,9};
    int n = 10;
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}