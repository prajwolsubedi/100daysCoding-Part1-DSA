#include<iostream>
using namespace std;

void reverseString(char name[], int size){
    int s = 0;
    int e = size - 1;
    while (s<e){
        swap(name[s++],name[e--]);
    }
}

bool checkPalindrome(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(name[s] != name[e-1])
        return 0;

        else{
            s++;
            e--;
        }
    }
    return 1;
}

char toLowerCase(char ch){
    if(ch >= 'a' && ch<= 'z')
    return ch;
    else
    return (ch-'A'+'a');
}

char toUpperCase(char ch){
    if(ch >= 'A' && ch<= 'Z')
    return ch;
    else
    return (ch-'a'+'A');
}

int getLength(char arr[]){
    int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char ch[40] = "Prajwol Subedi";
    int size = getLength(ch);
    cout<<size<<endl;
    reverseString(ch,size);
    cout<<ch<<endl;

    //TO STORE 'N' CHARACTERS IN AN ARRAY(STRING) WE NEED TO INITIALIZE IT WITH N+1 STRING BECAUSE THE LAST SPACE IS NULL. 
    cout<<"---"<<endl;
    char palindromeCheck[8] = "ABCDCBA";
    cout<<checkPalindrome(palindromeCheck, 8)<<endl;


    cout<<"Lower Case is "<<toLowerCase('C')<<endl;
    cout<<"Lower Case is "<<toLowerCase('c')<<endl;
    cout<<"Lower Case is "<<toLowerCase('Z')<<endl;


    return 0;
}