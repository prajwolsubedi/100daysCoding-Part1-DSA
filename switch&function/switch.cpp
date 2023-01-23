#include<iostream>
using namespace std;
int main(){
    int ch = 1;
    int num = 1;
    //expression in switch take integer or character only (not float or string.)
    switch(ch){
        //continue; is not valid in switch.
        case 1: cout<<"First"<<endl;
                cout<<"First again"<<endl;
                break;
                //if we don't want any cases to be activate after this case is matched then we use break.
        case 2: cout<<"Second"<<endl;
        break;
        
        //NESTED SWITCH.....

        case '1': switch(num){
            case 1 : cout<<"Value of num is: "<<num<<endl;
            break;
            case 2: cout<<"Value of num + 1 is "<<num+1<<endl;
            break;
        }
        break;
        //default case is not mandatory.
        default: cout<<"It is default case"<<endl;
    }
    return 0;
}