#include <iostream>

namespace first {
    int x =34;
}

int main()
{
    /* Variable : its representations of value or some thing to store.*/
    //two way 1. declaration 2. assignment

    int x = 5; // datatype variable name = value
 
    //Data Type

    //integer (whole number)
    int age = 21;

    //double (decimal number)

    double price = 21.56;

    //boolean (true or false)

    bool isEntry = false;

    //single character

    char grade = 'A';

    //string (for having a sentence or word)
    std::string name = "coder0898";

    // std::cout << "hello "<< name<<"\n";
    // std::cout << "your age is "<<age;

    //const specifies a variable is constant
    //tells comipler that prevent said variable from modifying it.
    const double PI = 3.14; //const datatype variable

    //namespace provide solutions to conflict in large projects
    std::cout << first::x;

    return 0;
}
