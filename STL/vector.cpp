//Vector in cpp
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<char> c(5,'A');
    //first parameter is size and second is the data you want to initialize vector with.
    vector<int> a(5,1);

    //To copy the vector.
    vector<int> copy(a);
    for(int i:copy){
        cout<<i<<" ";
    }
    cout<<endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // cout<<"Size and Capacity beforer pop: "<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;


    // cout<<"Size and Capacity after pop: "<<endl;
    // v.pop_back();
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    v.push_back(4);
    v.push_back(6);
    for(int i : v){
        cout<<i<<" ";
    }

    // cout<<"First element is : "<<v.front()<<endl;
    // cout<<"last element is : "<<v.back()<<endl;
    // cout<<"Element at index 2 is : "<<v.at(2)<<endl;


    return 0;
}