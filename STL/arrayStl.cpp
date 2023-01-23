#include<iostream>
//stl array library
#include<array>
using namespace std;
int main(){
    array<int, 5> a={1,2,3,4,5};
    int size = a.size();
    cout<<size<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i];
    }
    cout<<endl;

    

    cout<<"Element at index 2 -> "<<a.at(2)<<endl;
    cout<<"Empty or not -> "<<a.empty()<<endl;

    cout<<"First Element "<<a.front()<<endl;
    cout<<"Last Element "<<a.back()<<endl;
    //They all are performed in O(1) time complexity.
    return 0;
}