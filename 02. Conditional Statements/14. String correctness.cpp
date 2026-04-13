#include<iostream>
using namespace std;

int main ()
{
    string mode;
    cout<<"Enter mode of transport:";
    getline(cin , mode);
    
    if (mode == "Flying")
    {
        cout<<"Double fare.";
    }
    
    else
    {
        if ( mode == "Road")
        {
            cout<<"Same fare.";
        }
        else
        {
            cout<<"No Transport.";
        }
    }
    
    return 0;
}