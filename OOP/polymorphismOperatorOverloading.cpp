//Compile time polymorphism or also called static polymorphism.
#include<iostream>
using namespace std;
class B {
    public: 
    int a;
    int b;

    public: 
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        // int value1 = this -> a;
        // int value2 = obj.a;
        // cout<<"output: "<<value2 - value1<<endl;

        cout<<"Hello Boro "<<endl;
    }

    void operator() (){
        cout<<"I am bracket"<<endl;
        cout<< this->a <<endl;
    }
};
int main(){
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    //Here the + operator is overloaded.
    //Whenever we use + operator it will call the above function and execute what is inside of that function.
    obj1 + obj2;
    obj1();

    return 0;
}