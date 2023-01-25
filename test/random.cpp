#include<iostream>
using namespace std;
int main(){
    //testing exit();
    cout<<"Before exit....."<<endl;
    int exit_number = 10;
    //termination using exit

    cout<<"HEllO there"<<endl;
    exit(exit_number);
    exit(0);
    cout<<"After exit......"<<endl;
    return 0;
}