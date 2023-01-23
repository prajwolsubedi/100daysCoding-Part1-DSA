//PROGRAM TO SWAP THE ALTERNATES OF THE ARRAY.

#include<iostream>
using namespace std;
void swap_alternate(int a[], int size){
    for(int i=0;i<size;i+=2){
        if((i+1) < size){
            swap(a[i], a[i+1]);
        }
    }
}


int main(){
int size;
cout<<"Enter the size of an array: "<<endl;
cin>>size;
int array[size];
cout<<"Enter the elements of an array: "<<endl;
for(int i=0; i<size; i++){
    cin>>array[i];
}

swap_alternate(array,size);

for(int i=0; i<size; i++){
    cout<<array[i]<<endl;
}


return 0;
}