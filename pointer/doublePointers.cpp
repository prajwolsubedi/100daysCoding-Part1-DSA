#include<iostream>
using namespace std;

void update (int **p){
    //No change because it value of address is copied not the actual address.
    // p = p + 1;

    //Address of ptr1 is changed because the **p holds the actual address of ptr1;
    // *p = *p + 1;

    //It changes the value of i because *p contains address of ptr1 whose value is i=5;
    **p = **p + 1;
}

int main(){
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    // cout<<"&i: "<<&i<<endl;
    // cout<<"ptr1 : "<<ptr1<<endl;
    // cout<<"*ptr1 : "<<*ptr1<<endl;
    // cout<<"&ptr1 : "<<&ptr1<<endl;


    /*
    cout<<"Address in ptr1 :"<<ptr1<<endl;
    cout<<"Address of ptr1 :"<<&ptr1<<endl;
    cout<<"Address in ptr2 :"<<ptr2<<endl;
    cout<<"Value in ptr2 :"<<*ptr2<<endl;
    cout<<"Value inside address of ptr2 :"<<**ptr2<<endl;
    **ptr2 = 100;
    cout<<i<<endl;
    */
   cout<<"Before ----"<<endl;
   cout<<"i : "<<i<<endl;
   cout<<"*ptr2 : "<<*ptr2<<endl;
   cout<<"ptr1: "<<ptr1<<endl;
   cout<<"*ptr1: "<<*ptr1<<endl;

    update(ptr2);

    cout<<"After----"<<endl;
    cout<<"i : "<<i<<endl;
    cout<<"*ptr2 : "<<*ptr2<<endl;
    cout<<"ptr1: "<<ptr1<<endl;
    cout<<"*ptr1: "<<*ptr1<<endl;

//    cout<<i<<endl;

    return 0;
}