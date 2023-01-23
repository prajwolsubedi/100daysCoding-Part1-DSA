//Better way to find the no of prime numbers upto a given number having constrains.
//there is even better method known as segmented seive.

#include<iostream>
#include<vector>
int countPrime(int n);
using namespace std;
int main(){
    int n = 10;
    cout<<countPrime(n)<<endl;
    return 0;
}
int countPrime(int n){
    int count = 0;
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++){
        if(prime[i]){
            count++;
        }
        for(int j=i*2; j<n; j=j+i){
            prime[j] = false;
        }
    }
    return count;
}
