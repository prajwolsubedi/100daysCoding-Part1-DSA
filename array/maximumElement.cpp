//wap to find the minimum and maximum element in an array
#include<iostream>
#include<math.h>
using namespace std;
int maxElementOfArray(int arr[], int size){
    int max=arr[0];
        for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
}
    return max;
}
int main(){
    int arr[5] = {-9,8,-177,6,5};
    int maxi,mini;
        maxi = arr[0];
        mini = arr[0];
    for(int i=0;i<5;i++){
        // if(arr[i]>max){
        //     max = arr[i];
        // }
        //EASIER BUILT IN FUNCTION

        maxi= max(maxi,arr[i]); 
        //Yesle argument vitra jsko thulo value xa teslai return garxa.
        mini = min(mini,arr[i]);
    }
    cout<<"minimun element: "<<mini<<endl;
    cout<<"maximum element: "<<maxi<<endl;
    cout<<maxElementOfArray(arr,5);
    return 0;
}