#include<iostream>
using namespace std;

int main ( )
{
    float tempFaherenheit ;
    cout<<"Enter temperature in fahrenheit : ";
    cin>>tempFaherenheit ;
    
    float tempCelcius = (tempFaherenheit - 32) * 5/9;
    
    cout <<"Temperature in Celcius : "<<tempCelcius;
    
    return 0;
}