#include<iostream>
using namespace std;
void print(int *p){
    cout<< *p <<endl;
}

void update(int *p){
    *p = *p + 77;
    // cout<<*p<<endl;
    p = p + 1;
    cout<<"Inside funtion p = "<<p<<endl;
    //We can update value of pointer inside the function but we cannot update the address of the pointer.

}

int main(){
    int value = 5;
    int *p = &value;

    print(p);
    cout<<"Before: "<<p<<endl;
    update(p);
    cout<<"After: "<<p<<endl;
    return 0;
}