//Wap to implement linear serach using recursion
#include<iostream>
using namespace std;
bool isPresent(int *arr, int size, int element){
    //Base criteria
    if(size == 0)
    return 0;

    if(element == arr[size-1])
    return 1;


    //Recursive relation.
    else{   
        int ans = isPresent(arr,size-1,element);
        return ans;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n;
    cout<<"Enter any element you want to search: "<<endl;
    cin>>n;
    int result = isPresent(arr,5,n);
    if(result == 1)
    cout<<"Element is present "<<endl;
    else
    cout<<"Element is not present"<<endl;

    return 0;
}