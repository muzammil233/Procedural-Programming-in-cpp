#include<iostream>
using namespace std;

int main ( )
{
    int num;
    cout<<"Enter a four digit number : ";
    cin>>num;
    
    int a = num % 10 ;
    num = num / 10 ;
    int b = num % 10 ;
    num = num / 10 ;
    int c = num % 10 ;
    num = num / 10 ;
    int d = num ;
    
    int sumofDigits = a + b + c + d ;
    
    cout<<"Sum of Digits : "<<sumofDigits ;
    
    return 0;
}