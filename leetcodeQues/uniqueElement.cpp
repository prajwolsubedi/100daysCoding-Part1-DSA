
#include<iostream>
using namespace std;
int findUniquie(int *arr, int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr1[5] = {1,1,2,2,9};
    int arr2[7] = {1,1,2,2,3,4,3};
    int result1 = findUniquie(arr1,5);
    int result2 = findUniquie(arr2,7);
    cout<<result1<<endl<<result2<<endl;

return 0;
}