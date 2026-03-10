// A program that performs arithmetic operations , here "int" is used as a data type , we can also use "float or double" which would have been a better option but it is just for understanding.

#include<iostream>
using namespace std;

int main()
{
   int a , b ;
   cout<<" Enter number 1: ";
   cin>>a;
   cout<<" Enter Number 2: ";
   cin>>b;
   int sum = a + b;
   int difference  = a - b;
   int product  = a * b;
   int division = a / b ;
   int modulus = a % b;
   
   cout<<" Sum : "<<sum<<endl;
   cout<<" Difference :  "<<difference <<endl;
   cout<<" Product : "<<product<<endl;
   cout<<" Division : "<<division <<endl;
   cout<<" Modulus : "<<modulus;
   
    return 0;
}