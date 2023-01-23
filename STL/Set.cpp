//Set -> stores unique elements.
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    //Insertion Complexity is O(log(n))
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(8);
    s.insert(3);
    s.insert(3);

    for(auto i : s){
        cout<<i<<endl;
    }
    cout<<"Size of Set ->"<<s.size()<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto i : s){
    cout<<i<<" ";
    }

    cout<<endl;
    //It tells whether the element is present or not.
    //count
    cout<<"-5 is present or not "<<s.count(-5);

    //find() -> if the element is found it returns the iterator.
    cout<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"Value present at itr -> "<<*itr<<endl;



    return 0;
}