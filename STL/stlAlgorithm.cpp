#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);

    cout<<"Finding element 3"<<binary_search(v.begin(), v.end(), 3)<<endl;

    int a = 3;
    int b = 5;

    cout<<"Max ->"<<max(a,b)<<endl;
    cout<<"Min ->"<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;

    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotation"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    //Based on Intro sort.
    sort(v.begin(), v.end());
    cout<<"After Sort"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    return 0;
}