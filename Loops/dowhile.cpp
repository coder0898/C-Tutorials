#include <iostream>

using namespace std;

int main()
{

    // DoWhile loop will first execute block statements and then repeat itself if condition satisfy

    string name;

    do
    {
        cout << "Enter Your Name:";
        getline(cin, name);
    } while (name.empty()); // it will first execute block without condition checking and if will repeat till condition satisfy

    cout << "Hello, " << name << " bro";

    return 0;
}
