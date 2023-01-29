#include <iostream>
// including hero class from another file
//  #include "heroClass.cpp"
using namespace std;
class Hero
{
    // By default access modifier is private

private:
    int health;
    // They can be accessed anywhere in the program.
public:
    // It does not depend on any object type.(so we use static.)
    static int timeToComplete;

    // Default constructor
    // If you construct manual constructer the default constructor of the system will be dead.
    Hero()
    {
        cout << "This is default constructor" << endl;
    }

    // Parameterized construction
    //  Hero(int health, char level){
    //      //this stores the address of the current object.
    //      cout<<"this -> "<<this<<endl;
    //      this->health = health;
    //      this->level = level;
    //  }

    // Manually Created Copy constructor
    Hero(Hero &temp)
    {
        // We should never pass by value in copy constructor because parameter is inside the copy constructor and  when we pass by value it will again call the copy constructor and it will go infinite time.
        // So we should always pass by reference.

        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << this->health << endl;
        cout << this->level << endl;
        // cout << " this -> ";
        // cout << this << endl;
    }

    char level;

    // They can be accessed only inside the class.
    // getter
    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    // setter

    void setHealth(int h)
    {
        // We can also set condition or password in setter.
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }
    

    static int random(){
        return timeToComplete;
    }

    ~Hero()
    {
        cout << "Destructor is called" << endl;
        // It is automatically called for object created through statically but not for object create through dynamic memroy location.
    }
};

// initializing static variable outside the class
int Hero ::timeToComplete = 5;

using namespace std;
int main()
{
    cout << Hero::timeToComplete << endl;
    cout << Hero::random()<<endl;
    Hero lale;
    lale.setHealth(100);
    lale.setlevel('z');
    lale.print();
    cout << "The address of lale is : " << &lale << endl;
    cout << endl
         << endl;

    // Hero *kta = new Hero();
    // delete kta;

    // copy constructor(it only copies the values of the parameters)
    //  Hero kale(lale);
    //  kale.print();
    //  cout<<"The address of kale is : "<<&kale<<endl;

    return 0;

    /*

        // Hero jhole;
        //We cannot create jhole object because we have created manual constructor which requires parameters and there is not default constructor available.
        Hero lale(10,'C');
        cout<<"The address of lale -> "<<&lale<<endl;
        lale.print();
        cout<<endl<<endl;

    //static allocation
    Hero a;
    a.setHealth(10);
    a.setlevel('A');
    cout<<a.gethealth()<<endl;
    cout<<a.getlevel()<<endl;

    //Dynamic allocation.
    Hero *b = new Hero;
    b->setHealth(20);
    b->setlevel('B');
    cout<<(*b).gethealth()<<endl;
    cout<<(*b).getlevel()<<endl;


    Hero prajwol;
    // prajwol.health = 60;
    // prajwol.level = 'j';
    prajwol.setHealth(70);
    prajwol.setlevel('k');
    cout<<"prajwol health is : "<<prajwol.gethealth()<<endl;
    // cout<<"health is "<<prajwol.health<<endl;
    cout<<"level is "<<prajwol.level<<endl;


    // cout<<"size of h1 is : "<<sizeof(h1)<<endl;

    */
}