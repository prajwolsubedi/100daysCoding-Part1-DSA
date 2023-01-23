//Double ended queue insertion and deletion is possible on both end.
#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);

    // for(int i:d){
    //     cout<<i<<" ";
    // }

    // d.pop_back();
    cout<<endl;

    cout<<"Print first Index Element -> "<<d.at(1)<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"back  "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;


    cout<<"Before erase: "<<d.size()<<endl;
    //Here we have to give the parameter from where to where we want to delete
    d.erase(d.begin(), d.begin()+1);

    cout<<"After erase: "<<d.size()<<endl;

    for(int i : d){
        cout<<i<<" ";
    }
}