//Those variables which have same memory but different names is known as Reference variable.
#include<iostream>
using namespace std;
//pass by value
void update0(int n){
    n = n + 2;
}

//pass by reference
void update1(int &n){
    n++;
}

int getSum(int *arr, int size){
    int sum = 0;
    //arr[i] = *(arr+1) --> this both are the same
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

//return by reference.
//This is a bad practice cause variable scope are dead inside the block.
// int& update(int n){
//     int num = n;
//     int &ans = num;
//     return ans;
// }

int main(){
    /*
    int i = 5;
    int &j = i;
    i++;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    update0(i);
    update1(i);
    cout<<i<<endl;
    */

   //Dynamic memory allocation.
   int n;
   cout<<"Enter the size of an array: "<<endl;
   cin>>n;
   int *arr = new int[n];
   cout<<"Enter the elements of an array: "<<endl;
   for(int i=0; i<n;i++){
        cin>>arr[i];
   }

    cout<<getSum(arr,n)<<endl;
   //here we created arr of variable size.

   delete []arr;

    cout<<"After deletion "<<endl;
   cout<<arr[0];


    return 0;
}