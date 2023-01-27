#include<iostream>
using namespace std;

int checkFunction(int n){
    int ans;

    if(n==1){
    ans = true;
    return ans;
    }

    checkFunction(n-1);
    cout<<"AAjai chalirakai xa kyare bro: "<<endl;
    ans = false;

    return ans;
}

int main(){
    //testing exit();
    // cout<<"Before exit....."<<endl;
    // int exit_number = 10;
    // //termination using exit

    // cout<<"HEllO there"<<endl;
    // exit(exit_number);
    // exit(0);
    // cout<<"After exit......"<<endl;
    int n = 1;
    cout<<checkFunction(1);
    return 0;
}