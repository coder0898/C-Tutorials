#include <iostream>

using namespace std;

int main()
{
    //ternary operator = condition ? "true" : "false"
    // even odd program

    int inputNumber;

    cout << "Enter Number you want to check:";
    cin >> inputNumber;

    (inputNumber % 2 == 1)? cout<<"Number "<<inputNumber<<" is Odd":cout<<"Number "<<inputNumber<<" is Even";
    

    return 0;
}
