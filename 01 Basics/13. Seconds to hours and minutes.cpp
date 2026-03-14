#include<iostream>
using namespace std;

int main ( )
{
    int seconds ;
    cout<<"Enter seconds : ";
    cin>>seconds;
    
    int hour = seconds / 3600 ;
    seconds = seconds % 3600 ;
    int minutes = seconds / 60 ;
    int remainingseconds = seconds % 60 ;
    
    cout<<"The given seconds are equal to : "<<hour<<"  hour(s) "<<minutes<<" minutes "<<remainingseconds<<" seconds ";
    
    return 0;
}