#include<iostream>
using namespace std;

class employee{

    //from here
    private: 
        string name;
        int age;
        int height;
    public:
        int getAge(){
            return this->age;
        }

    //To here 
    //It is example of encapsulation.
};
int main(){
    employee e1;
    cout<<"Dami chalirako xa "<<endl;
    return 0;
}