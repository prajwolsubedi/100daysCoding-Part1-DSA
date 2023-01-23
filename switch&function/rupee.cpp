//WRITE A PROGRAM TO FIND HOW MANY DIFFERENT RUPPES ARE REQUIRED TO MAKE A GIVE RUPPES
//FOR EXAMPLE 1330 REQUIRES 1 THOUSAND NOTE 3 HUNDRED NOTES AND 1 TEN NOTES.
#include<iostream>
using namespace std;
int main(){
    int rupee,n;
    cout<<"Enter any rupee: "<<endl;
    cin>>rupee;

    while(rupee != 0){
        //I think this can also be done with the help of switch statement and the code can be optimized.
        if(rupee>1000){
            n = 1;
        }
        else if(rupee>100){
            n = 2;
        }
        else if(rupee>20){
            n = 3;
        }
        else if(rupee>10){
            n = 4;
        }
        else if(rupee>1){
            n = 5;
        }

        switch(n){
        case 1 : cout<<"You need "<< rupee / 1000 <<" 1000 rs notes."<<endl;
                rupee = rupee % 1000; 
                break; 
        case 2 : cout<<"You need "<< rupee / 100 <<" 100 rs notes."<<endl; 
                rupee = rupee % 100;  
                break;
        case 3 : cout<<"You need "<< rupee / 20 <<" 20 rs notes."<<endl; 
                rupee = rupee % 20;  
                break;
        case 4 : cout<<"You need "<< rupee / 10 <<" 10 rs notes."<<endl;  
                rupee = rupee % 10; 
                break;
        case 5 : cout<<"You need "<< rupee <<" 1 rs notes."<<endl; 
                rupee = 0;  
                break;
        default:
        cout<<"You are broke motherfucker.";
        }
    }

    return 0;
    }