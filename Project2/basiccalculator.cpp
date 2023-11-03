#include <iostream>
//Basic Calculator

using namespace std;

int main()
{
 
    char operators;
    double number1;
    double number2;
    double results; 

    cout<<"************Calculator************\n";
    cout<<"Enter 1st Number:";
    cin >> number1;
    cout<<"\nEnter 2nd Number:";
    cin >> number2;
    cout<<"\n Select Operation you want(+-*/)";
    cin >> operators;

    switch (operators)
    {
    case '+':
            results = number1 + number2;
            cout<<"\nThe Sum of Numbers "<<number1<<" and "<<number2<<" is "<<results;
        break;
        
    case '-': 
            if (number2 > number1)
            {
                results = number2 - number1;
            }
            else 
            {
                results = number1 - number2;
            }
             cout<<"\nThe Differnce of Numbers "<<number1<<" and "<<number2<<" is "<<results;
        break;
            
    case '*':
           
           if (number1 == 0 || number2 == 0)
           {
             results = 0;
           }
           else
           {
             results = number1 * number2;
           }
           
            cout<<"\nThe Multipication of Numbers "<<number1<<" and "<<number2<<" is "<<results;
        break;    
        
    case '/':
           results = number1 / number2;
            cout<<"\nThe Division of Numbers "<<number1<<" and "<<number2<<" is "<<results;
        break;    
    
    default: cout<<"Invalid Operator Input!!!";
        break;
    }

    return 0;
}
