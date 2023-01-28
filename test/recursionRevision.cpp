// #include<iostream>
// using namespace std;

// void merge(int *arr, int s, int e){
//     int mid = s + (e-s) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *first = new int[len1];
//     int *second = new int[len2];

//     //Copy the arr

//     //1st array begins from s to mid.
//     int mainArrayIndex = s;
//     for(int i=0; i<len1; i++){
//         first[i] = arr[mainArrayIndex++];
//     }

//     //Second array begins from mid + 1 to e.
//     mainArrayIndex = mid+1;
//      for(int i=0; i<len2; i++){
//         second[i] = arr[mainArrayIndex++];
//     }

//     //merge 2 sorted array
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;
//     while(index1 < len1 && index2 < len2){
//         if(first[index1] < second[index2]){
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }

//     while(index1 < len1){
//         arr[mainArrayIndex++] = first[index1++];
//     }

//     while(index2 < len2){
//         arr[mainArrayIndex++] = second[index2++];
//     }

//     delete []first;
//     delete []second;
// }

// void mergeSort(int *arr, int s, int e){
//     int mid = s + (e-s)/2;
//     //Base case
//     if(s >= e)
//     return ;

//     //Sort left side
//     mergeSort(arr,s,mid);

//     //Sort right side
//     mergeSort(arr,mid+1,e);

//     //merge
//     merge(arr,s,e);

// }
// int main(){
//     int arr[7] = {7,6,5,4,3,2,1};
//     int n = 7;
//     mergeSort(arr,0,n-1);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};
    //copy by value;
    int pivot = arr[0];
    swap(pivot, arr[1]);

    for(int i=0; i<5 ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<pivot;
}