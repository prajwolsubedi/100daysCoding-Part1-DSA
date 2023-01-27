//Wap a program that says the digits in the number.
//for example 412 -> four one two
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void sayDigit(int n,string *arr){
    //Base criteria
    if(n==0)
    return;

    //processing
    int digit = n % 10;
    n = n / 10;


    //Recursive call
    sayDigit(n,arr);    

    cout<<arr[digit]<<" ";

}
int main(){
    int n;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cout<<"Enter any number : "<<endl;
    cin>>n;
    sayDigit(n,arr);
    return 0;
}
