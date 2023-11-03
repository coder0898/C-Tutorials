#include <iostream>

using namespace std;

//Temperature Conversion Program
// Celsius to Kelvin: K = C + 273.15
// Kelvin to Celcius: C = K - 273.15
// Fahrenheit to Celcius: C = (F-32) (5/9)
// Celsius to Fahrenheit: F = C(9/5) + 32
// Fahrenheit to Kelvin: K = (F-32) (5/9) + 273.15
// Kelvin to Fahrenheit: F = (K-273.15) (9/5) + 32

int main()
{
    double inputTemperature;
    char inputDegree;
    char resultDegree;
    double resultTemperature;

    cout<<"Welcome to Temperature Conversion Program\n";
    cout<<"Enter Input Temperature Degree(C,K,F):";
    cin >> inputDegree;
    cout<<"\nEnter Input Temperature:";
    cin >> inputTemperature;
    cout<<"Enter Conversion Temperature Degree(C,K,F):";
    cin >> resultDegree;

    switch (inputDegree)
    {
    case 'c':
    case 'C':    
        
           if (resultDegree == 'K' || resultDegree == 'k')
           {
              resultTemperature = inputTemperature + 273.15;
              cout<<"Result Temperature is "<<resultTemperature<<"K";
           }
           else if (resultDegree == 'F' || resultDegree == 'f')
           {
              resultTemperature = ((inputTemperature * 9) / 5) + 32;
              cout<<"Result Temperature is "<<resultTemperature<<"F";
           }
           else
           {
               cout<<"Your both degree is same as result temperature is "<<inputTemperature <<"C only.";
           }
           
        break;

    case 'f':
    case 'F':    

           if (resultDegree == 'K' || resultDegree == 'k')
           {
              resultTemperature = (((inputTemperature - 23) * 5)/9) + 273.15;
              cout<<"Result Temperature is "<<resultTemperature<<"K";
           }
           else if (resultDegree == 'C' || resultDegree == 'c')
           {
              resultTemperature = (((inputTemperature - 32) * 5)/9);
              cout<<"Result Temperature is "<<resultTemperature<<"C";
           }
           else
           {
               cout<<"Your both degree is same as result temperature is "<<inputTemperature <<"F only.";
           }

        break;

    case 'k':
    case 'K': 

           if (resultDegree == 'C' || resultDegree == 'c')
           {
              resultTemperature = inputTemperature - 273.15;
              cout<<"Result Temperature is "<<resultTemperature<<"C";
           }
           else if (resultDegree == 'F' || resultDegree == 'f')
           {
              resultTemperature = (((inputTemperature - 273.15) * 9)/5) + 32;
              cout<<"Result Temperature is "<<resultTemperature<<"F";
           }
           else
           {
               cout<<"Your both degree is same as result temperature is "<<inputTemperature <<"K only.";
           }   
        
        break;        
    
    default:
         cout<<"Invalid Input Degree!!!";
        break;
    }
    
    return 0;
}
