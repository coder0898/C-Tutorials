#include <iostream>

using namespace std;

int main()
{
    // Second condition statement- Switch statement which checks cases
    //example month find program based on month number

    int inputMonth;

    cout<<"Welcome Month Finding Program based on month"<<"\n";
    cout<<"Enter Month Number(1-12):";
    cin >> inputMonth;

    switch (inputMonth)
    {
    case 1:
           cout<<"The month is January\n";
        break;

    case 2:
          cout<<"The month is February\n";
        break;    
    
    case 3:
        cout<<"The month is March\n";
        break;
            
    case 4:
        cout<<"The month is April\n";
        break;
            
    case 5:
        cout<<"The month is May\n";
        break;
            
    case 6:
        cout<<"The month is June\n";
        break;
            
    case 7:
        cout<<"The month is July\n";
        break;
            
    case 8:
        cout<<"The month is August\n";
        break;
            
    case 9:
        cout<<"The month is September\n";
        break;
            
    case 10:
        cout<<"The month is October\n";
        break;
            
    case 11:
        cout<<"The month is November\n";
        break;
            
    case 12:
        cout<<"The month is December\n";
        break;

    default:
        cout<<"Invalid Month Number\n";
        break;
    }

    return 0;
}
