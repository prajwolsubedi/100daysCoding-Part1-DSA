//BINARY TO DECIMAL CONVERSION

#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int n,i=0,answer=0;
   cout<<"Enter the decimal number: "<<endl;
   cin>>n;

   while(n!=0){
    int bit = n & 1;
    answer = bit * pow(10,i) + answer;
    i++;
    n=n>>1;
   }

    cout<<"The binary conversion of the number is "<<answer<<endl;
    return 0;


}