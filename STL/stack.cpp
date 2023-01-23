#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(20);
    s.push(20);
    s.push(23);
    
    cout<<"Top Element"<<s.top()<<endl;

    s.pop();
    cout<<"Top Element"<<s.top()<<endl;

    cout<<"Size of stack "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

    return 0;
}