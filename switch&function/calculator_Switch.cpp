//Calculator operations using switch statement.

#include<iostream>
using namespace std;
int main(){
    int a = 6, b = 2;
    int operation = '+';
    switch (operation)
    {
    case '+':   cout<<a+b<<endl; 
        break;
    case '-':   cout<<a-b<<endl; 
        break;
    case '*':   cout<<a*b<<endl; 
        break;
    case '/':   cout<<a/b<<endl; 
        break;
    default:
        break;
    }
    return 0;
}