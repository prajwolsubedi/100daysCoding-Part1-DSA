//wap to return maximum occuring character in an input string.
#include<iostream>
using namespace std;

// char getMaxOccCharacter(string s){
//     int arr[26] = {0};
//     for(int i=0; i<s.length(); i++){
//         int number=0;
//         char ch = s[i];
//         //Lowercase
//         if(ch >= 'a' && ch<= 'z'){
//             number = ch - 'a';
//         }
//         //Uppercase
//         else 
//         number = ch - 'A';

//     arr[number]++;
//     }
//     int maxi = -1, ans=0;
//     for(int i=0; i<26;i++){
//         if(maxi < arr[i]){
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     return 'a' + ans;
// }

int main(){

    // char s[5];
    string s;
    cout<<"Length of String before input: "<<endl<<s.length()<<endl;
    getline(cin,s);
    cout<<s;
    cout<<"Length of string after input: "<<s.length();
    // cout<<getMaxOccCharacter(s)<<endl;

    return 0;
}
