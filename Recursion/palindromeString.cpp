#include<iostream>
using namespace std;
bool checkPalindrome(string str, int i, int j){
    //Base case
    if(i >= j)
    return 1;

    if(str[i] != str[j])
    return 0;

    //Recursive Relation
    else
    return checkPalindrome(str, ++i, --j);
}
int main(){
    string name = "abcba";
    cout<<endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout<<"It is a Palindrome "<<endl;
    }
    else{
        cout<<"It is not a Palindrome"<<endl;
    }
    return 0;
}