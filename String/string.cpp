#include <iostream>

using namespace std;

int main()
{
    string name;

    cout<<"Enter your Name:";
    getline(cin,name);

    //empty
    
    if (name.empty())
    {
       cout<<"Please write your name\n";
    }
    else
    {
       //length
    (name.length() < 5) ? cout<<"Your Name is less than 5 character..": cout<<"Welcome Home "<<name;

    //clear name.clear()
    //append

    // name.append('@gmail.com');

    // cout<<"Your new email Id is "<<name;

    }
    

    
    return 0;
}
