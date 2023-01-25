#include<iostream>
using namespace std;

int main(){
    int n = 100;

    /*
    cout<<"Address of n : "<<&n<<endl;
    int *ptr = &n;
    double d = 10;
    double *p = &d;
    n++;
    (*ptr)++;
    cout<<n<<endl<<*ptr<<endl;
    cout<<"What ptr holds (ptr): "<<ptr<<endl;
    cout<<"Value in address that ptr holds(*ptr): "<<*ptr<<endl;
    cout<<"Address of ptr(&ptr) : "<<&ptr<<endl;
    cout<<"Addres of integer ptr is "<<sizeof(ptr)<<endl;
    cout<<"Addres of double ptr is "<<sizeof(ptr)<<endl;
    //Adress of all types of pointer is same because they only store address.

    cout<<"---------"<<endl;

    //COPYING A POINTER.
    int *q = ptr;
    cout<<"Adrress in q: "<<q<<endl;
    (*q)++;
    cout<<n<<endl;
    // q = q + 1;
    cout<<q<<endl;
    cout<<*q<<endl;

   int arr[10] = {1,3,3,8};
//    int *ptr = arr;
    //Getting address of first location of an array.
    int *ptrArr = arr;
    cout<<"Address of array : "<<ptrArr<<endl;
    cout<<"Value of *ptrArr : "<<*ptrArr<<endl;
    cout<<"Value at index 3 : "<<*ptrArr+3<<endl;

    cout<<"2[arr] : "<<2[arr]<<endl;
    cout<<"*(2+arr) : "<<*(2+arr)<<endl;

    //obviously these 2 are different
    cout<<"Value at index 3 : "<<*(ptrArr+3)<<endl;
    int *ptr = &arr[1];
    cout<<"Address of second location of array: "<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<arr<<endl;

    cout<<"Size of Addres off arr "<<sizeof(arr)<<endl;
    cout<<"Size of Address of pointer to arr "<<sizeof(ptrArr)<<endl;
    cout<<"Size of Address of value at adress pointer by pointer "<<sizeof(*ptrArr)<<endl;
    cout<<"Size of Address of ptrArr "<<sizeof(&ptrArr)<<endl;

    */

   /*

   int array[5] = {5,4,3,2,1};
   int *ptr = array;
   cout<<"Address of array: "<<&array<<endl;
   cout<<"Addres of pointer pointing to array: "<<&ptr<<endl;
   //Not possible to change the content of symbol table.
//    array = array + 1;

//But possible in case of ptr;
    cout<<"Address before change "<<ptr<<endl;
    ptr = ptr + 1;
    cout<<"Address after change "<<ptr<<endl;
    //In case in ptr in pointing to array it point to next element in array.
    cout<<*(ptr)<<endl;

    */

   //CHARACTER ARRAY
    int arr[5];
    char name[8] = {'p','r','a','j','w','o','l'};
    char *ptr = name;
    cout<<*(ptr+6)<<endl;

    //Cout function is differently implemented for character and integer array.
    cout<<arr<<endl;
    //It gives address
    cout<<name<<endl;
    //It gives content

    char *c = &name[1];
    //It prints ultil it found the null character in case of character array.
    cout<<c<<endl;

    //ifthere is no null character then;
    char temp = 'p';
    char *chptr = &temp;
    cout<<chptr<<endl;



    return 0;
}