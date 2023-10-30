#include <iostream>

using namespace std;

int main()
{
    //Type Conversion = conversion of value of one datatype to another
    //                  Implicit = automatic
    //                  Explicit = Preced value with new data type (int)

    //Implicit
    // int pi = 3.14;

    // cout<< "Value of PI is "<<pi;//will truncate the decimal value, result will be 3

   //Explicit
   double pi = (int) 3.14;
   cout<<"Value of PI is "<<pi;

    return 0;
}
