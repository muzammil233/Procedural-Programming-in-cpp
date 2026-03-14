#include<iostream>
 using namespace std;

 int main ( )
{
 int num;
 cout<<"Enter five digit number:";
 cin>>num;

 int a = num % 10;
 int b = num /10000;
 
 cout<<"First digit (before swap):"<<b<<endl;
 cout<<"Last digit (before swap):"<<a<<endl;

 int temp = a;
 a = b;
 b = temp;

 cout<<"First digit(after swap):"<<b<<endl;
 cout<<"Last digit(after swap):"<<a;

 return 0;
}