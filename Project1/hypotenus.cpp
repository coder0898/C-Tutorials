//Creating a Hypotenuse Calculator
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //formula  c = sqrt(a^2 + b^2)
    double base;
    double altitude;
    double hypotenuse = 0;

   cout <<"********Hypotenuse Calculator********\n";
   cout <<"Enter Value of Base:";
   cin >>base;
   cout <<"\nEnter Value of Altitude:";
   cin >>altitude;
   cout<<'\n';

   hypotenuse = sqrt(pow(base,2)+pow(altitude,2));

   cout<<"The hypotenuse is "<<hypotenuse; 

    return 0;
}
