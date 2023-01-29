#include<iostream>
using namespace std;


class Human{

    protected:
        int height;

    public: 
        string name;
        int age;
        int weight;

    public:
        int getWeight(){
            return this->weight;
        }

        void setWeight(int w){
            this->weight = w;
        }
};

class Male : public Human{
    public: 
        int khatraLvl;
        int workEthics;

        void growing(){
            cout<<"Learning and growing continuosly"<<endl;
        }
};


int main(){
    Male lale;

    // cout<<lale.workEthics<<endl;
    // cout<<lale.weight<<endl;
    // cout<<lale.age<<endl;
    // cout<<lale.height<<endl;
    cout<<"Dami chalirako xa "<<endl;
    lale.growing();

    lale.setWeight(100);
    cout<<lale.weight<<endl;
    return 0;
}