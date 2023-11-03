#include <iostream>

using namespace std;

int main()
{
    //While loop will execute statment block till condition is satisfying
    //example

    string name;

    while (name.empty())  //it will keep executing till user writes name
    {
        cout<<"Enter Your Name:";
        getline(cin,name);
    }
    
    cout<<"Hello, "<<name<<" bro";

    return 0;
}
