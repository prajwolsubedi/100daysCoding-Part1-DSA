//Map --> data is stored in the form of key . key are unique.
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1] = "Prajwol";
    m[4] = "Pranim";
    m[2] = "Srijan";
    // m.insert({3,"Lale"});
    //key are sorted in ordered Map.

    cout<<"Before erase: "<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 4 -> "<<m.count(4)<<endl;
    cout<<"Finding 4 -> "<<m.count(5)<<endl;

    cout<<"After erase: "<<endl;
    //We have to only give key to erase an element from the map.
    m.erase(2);
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(1);
    for(auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }


    return 0;
}