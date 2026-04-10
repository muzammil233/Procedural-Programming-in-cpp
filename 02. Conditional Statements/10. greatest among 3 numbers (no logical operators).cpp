#include<iostream>
using namespace std;

int main ( )
{
    int num1;
    cout<<"Enter first number:";
    cin>>num1;
    
    int num2;
    cout<<"Enter second number:";
    cin>>num2;
    
    int num3;
    cout<<"Enter third nunber:";
    cin>>num3;
    
    if ( num1 > num2 )
    {
        if ( num1 > num3 )
        {
           cout<<num1 <<" is the greatest";
        }
        else
        {
            cout<<num3<<" is the greatest.";
        }
    }  
    else 
    {
        if ( num2 > num3 )
        {
            cout<<num2<<" is the greatest.";
        }
     else 
     {
         cout<<num3<<" is the greatest.";
      }
   }
    return 0;
 }