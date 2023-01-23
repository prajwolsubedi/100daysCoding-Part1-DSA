//Default max heap -> dequeued element is maximum element.
#include<iostream>
#include<queue>

using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;

    //min_heap
    priority_queue<int, vector<int>, greater<int> > mini;



    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(6);
    maxi.push(4);

    int n = maxi.size();
    //maxi.size() keeps on changing as we pop element so we store it's value in n.
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;


    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(6);
    mini.push(4);

    int m = mini.size();
    //maxi.size() keeps on changing as we pop element so we store it's value in n.
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Khali ho ra bro?? "<<mini.empty()<<endl;
    return 0;
}

