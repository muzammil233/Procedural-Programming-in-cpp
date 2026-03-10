#include<iostream>
using namespace std ;

int main ( )
{
    const double PI = 3.142;
    float radius;
    cout<<"Enter radius of a circle : ";
    cin>>radius;
    
    float circleArea = PI * radius  * radius ;
    cout<<" Area of Circle : "<<circleArea<<endl;
    
    float length;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    float width;
    cout<<"Enter width of rectangle : ";
    cin>>width;
    
    float rectangleArea = length  *  width;
    cout<<" Area of Rectangle : "<<rectangleArea<<endl;
    
    float side;
    cout<<"Enter length of one side of square :";
    cin>>side;
    
    float squareArea = side * side ;
    cout<<" Area of Square : "<<squareArea<<endl;
    
    float base;
    cout<<"Enter base of triangle : ";
    cin>>base;
    float height ;
    cout<<"Enter height of a triangle : ";
    cin>>height ;
    
    float triangleArea = 0.5 * base * height ;
    cout<<" Area of Triangle : "<<triangleArea<<endl;
    
    return 0;
    
}