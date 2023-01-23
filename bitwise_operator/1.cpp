#include<iostream>
using namespace std;

int sum = 0, remainder;    
int reverse(int n){
    if(n>0){
        remainder = n % 10;
        sum = sum * 10 + remainder;
        reverse(n/10);
    }
    else
        return sum;

return sum;  
}
int main(){
    /*
    int a = 4, b=5;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"a XOR b "<<(a^b)<<endl;
    cout<<"Not a "<<~a<<endl;

    //left shift and right shift.
    cout<<"left shift b "<<(b<<1)<<endl;
    cout<<"Right shift b "<<(b>>2)<<endl;

    */
   
   
    /*
    //Pre and post increcrement and decrement.
    cout<<++a<<endl;
    //5
    cout<<a++<<endl;
    //5
    cout<<--a<<endl;
    //6-1=5
    cout<<a--<<endl;
    //5

    if(b-- == a ){
        cout<<"decrement bayeko value le condition check hunxa"<<endl;
        cout<<"b ko value inside function"<<b<<endl;
    }
    else
    cout<<"paila condition check hunxa ani balla value decrement hunxa.";
    
    cout<<"b ko value outside function "<<b<<endl;

   if(++a){ //this means if ++a is positive.
    cout<<b;
   }
   else
   cout<<++b;

    return 0;
    */




   //TWO VARIABLES IN FOR LOOP
   /*
   for(int a=4, b=5; a>=0 && b>=1; a--,b--){
    cout<<a <<" "<< b <<endl;
   }
   cout<<"---"<<endl;

   //THREE VARIABLES IN FOR LOOP.
   for(int a=4, b=5 ,c=6; a>=0 && b>=1 && c>=2; a--,b--,c*=c){
    cout<<a <<" "<< b <<" "<< c <<endl;
   }
   cout<<"---"<<endl;
   */


   //FIBONACCI SERIES.
   /*
   int n,i,j;
   cout<<"Enter value of n upto which you want to find fibonacci series. "<<endl;
   cin>>n;
   int n1 = 0;
   int n2 = 1;
   int n3;
   cout<<"The fibonnacci series is: "<<endl<<n1<<" "<<n2<<" ";
   for(i=0;i<=n;i++){
        n3 = n1 + n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
   }

*/


/*
//PRIME NUMBER OR NOT
int n,i;
cout<<"Enter any postive number: "<<endl;
cin>>n;
if(n<0)
cout<<"Invalid input.";
int count = 0;
if(n==1){
    cout<<"It is a prime number"<<endl;
}
for(i=1;i<n;i++){
    if(n%i == 0){
        count++;
    }
}
if(count == 1){
    cout<<n<<" is a prime number."<<endl;
}
else if(count>1)
cout<<n<<" is not a prime number."<<endl;
*/


/*
//CONTINUE;
cout<<"Example of continue statement."<<endl;
int i,n=4;
for(i=0;i<n;i++){
    cout<<"HII"<<endl;
    cout<<"Hello"<<endl;
    continue;
    cout<<"Replay garana mayalu."<<endl;
}

//left to right precedence for * / %
cout<<2/3*3+1;
*/

    int number,result;
    cout<<"Enter any number: "<<endl;
    cin>>number;
    result = reverse(number);
    cout<<"The reverse of "<<number<<" is "<<result<<endl;
    if(result == number)
    cout<<"It is a palindrome number!!"<<endl;
return 0;

}
