//Line (First In First Out)
#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("Money");
    q.push("Love");
    q.push("Power");


    cout<<"First Element "<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;

    cout<<"Size after pop "<<q.size()<<endl;

    return 0;
}
