//Also known as dynamic polymorphism
#include<iostream>
using namespace std;
class Animal{
    public: 
        void speak(){
            cout<<"Speaking......"<<endl;
        }
};

class Dog : public Animal{
    public:
    //Runtime polymorphism.
        void speak(){
            cout<<"Barking...."<<endl;
        }
};
int main(){
    Dog d;
    d.speak();
    return 0;
}