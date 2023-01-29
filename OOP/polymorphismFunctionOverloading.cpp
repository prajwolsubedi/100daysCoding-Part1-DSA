//Existing in multiple form
//Two types 
//1. Compile time polymorphism  -> function overloading , operator overloading.
//2. Run time polymorphism
#include<iostream>
using namespace std;
class A {
    public: 
    void namaste(){
        cout<<"Namaste guys kasto chalirako xa"<<endl;
    }

    //Same name but different arguments so there is no error.
    void namaste(string name){
        cout<<"What's up "<<name<<endl;
    }

    //Function that differes only on the return type cannot be overloaded.
    // int namaste(){
    //     cout<<"What's up "<<endl;
    // }

    //We can overload the function by changing the number of argument or by changing the type of the argument.
    int namaste(char name){
        cout<<"Yo Dude what's up "<<name<<endl;
        return 1;
    }

    //This is such a awesome things.

};
int main(){
    A obj;
    obj.namaste("prajwol");
    return 0;
}