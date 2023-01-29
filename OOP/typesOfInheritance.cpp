#include <iostream>
using namespace std;

class livingBeings{
    public: 
        string category;

    void breathing(){
        cout<<"I can breathe 😃🤣 "<<endl;
    }

    void speak(){
        cout<<"Ummmm Hmmmm"<<endl;
    }
};

//Single inheritance
class Animal : public livingBeings{
public:
    string name;

    void sleep()
    {
        cout << "I Have teeth 🥰😍" << endl;
    }
};

// Multilevel inheritance
class Dog : public Animal
{
public:
    string name;

    void setName(string name)
    {
        this->name = name;
    }

    void bark()
    {
        cout << "I can bark 🐶🦊🐶" << endl;
    }
    
};

class Human{
    public:
    int age;

    void think(){
        cout<<"I can think 🤔💭"<<endl;
    }

    void speak(){
        cout<<"I can speak properly 🥹 😆"<<endl;
    }

};

//Multiple inheritance
class Male : public livingBeings, public Human{
    public:
    int fightingSkill;



};

//heirarchical Human -> male , female;
//heirarchical inheritance
class Female : public Human{
    public: 
        int beautylevel;

        void birth(){
            cout<<"I can give birth 👩‍🍼 👶👼 "<<endl;
        }
};

//hybrid inheritance
//combination of more than one inheritance

//It is hybrid inheritance because male and female are heirarchical and character is muliple inheritace.
class character : public Male , public Female{
    public:

    void kind(){
        cout<<"Always try to be Kind 😘"<<endl;
    }
};


//Inheritance ambiguity
//If both of the parents have the same function name then inheritance ambiguity is occured.
//To solve this we use scope resolution operator (::)


int main(){
    // Female f;
    // character c;
    // c.kind();
    // f.think();
    // f.birth();

    Male lale;
    //Solving inheritance ambiguity through scope resolution technique.
    lale.Human::speak();



    // lale.breathing();
    // lale.think();
    // lale.speak();
    // Dog d;
    // d.breathing();
    // d.sleep();
    // d.bark();
    return 0;
}