//Wap to reverse a string using recursion
#include<iostream>
using namespace std;
void reverse(string &str, int i, int j){
    //Base case
    if(i > j)
    return;

    swap(str[i],str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str,i,j);
}
int main(){
    string name = "Prajwol";
    reverse(name,0,name.length()-1);

    cout<<name<<endl;
    return 0;
}

/*
//Wap to reverse a string using recursion (using single pointer)
#include<iostream>
using namespace std;
void reverse(string &name,int i){
    //Base case 
    int n = name.length(); 

    if(i > n-i-1)
    return ;
    //It indicates that the function is terminated.

    //Solve one case
    swap(name[i], name[n-i-1]);
    i++;

    //Recursive call
    reverse(name,i);
}

int main(){
    string name = "Prajwol is khatra";
    reverse(name,0);
    cout<<name<<endl;
    return 0;
}
*/