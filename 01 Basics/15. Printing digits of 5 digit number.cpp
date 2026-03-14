#include<iostream>
using namespace std;

int main ( )
{
    int num;
    cout<<"Enter five digit number:";
    cin>>num;
    
    int a = num % 10;
    num = num / 10;
    int b = num % 10;
    num = num / 10;
    int c = num % 10;
    num = num / 10;
    int d = num % 10;
    num = num / 10;
    int e = num;
    
    cout<<"1st digit:"<<e<<"\n2nd digit:"<<d<<"\n3rd digit:"
          <<c<<"\n4rth digit:"<<b<<"\n5th digit:"<<a;
          
   return 0;
}