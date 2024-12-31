/*
    Operator Overloading -
    It is used to redefine the nature of operators for non primitive data types.;

    there are two types of operator overloading-

    1.Unary operator overloading;
    2.Binary operator overloading;
*/

//unary operator overloading;
#include <iostream>
using namespace std;
class top
{
         int a = 10;
         public:void operator ++()
         {
             a++;
             cout << a << "\n";
         }
         public:void operator --()
         {
             a--;
             cout << a << "\n";
         }

};

int main()
{
    top p;
    ++p;
    --p;
}
