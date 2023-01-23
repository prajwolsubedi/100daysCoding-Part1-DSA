#include<iostream>
using namespace std;
bool linearSearch(int arr[], int key, int size){
    for(int i = 0; i<=size; i++){
        if(key==arr[i])
        return true;
    }
    return false;
}
int main(){
    int arr[10] = { 5,7,-2,10,22,-2,0,5,22,1};
    int n;
    //wheather 1 is present or not in arr?
    cout<<"Which number you want to find in the array? "<<endl;
    cin>>n;
    int result = linearSearch(arr,n,10);
    if(result == 1){
        cout<<n<<" is present in the array. ";
    }
    else
    cout<<n<<" is not present in the array";
    return 0;
}