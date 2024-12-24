/* Constructor Type --
    1. Default
       syntax -  public:className()
                 {
                    statement/code;
                 }

    2. Parametrized
    3.Copy Constructor -
            1. Shallow Copy
            2. Deep Copy

    Constructor(special function) -
    1. It is called a special type of function;
    2. Constructor is used to allocate the memory of an object;
    3. Constructor does not have any return type;
    4. By default the class having a constructor which is belongs to public specifier;

    Parameterized -
    1. In a parameterized constructor we use parameter in a function;

    Constructor Overloading - if a class having more than one constructor with different
     parameters is called constructor Overloading;
*/

//Default Constructor
#include<iostream>
using namespace std;
class top
{
    public:top()//Implicit Call;
    {
        cout << "Constructor called\n";
    };

    public:void show()//Explicit Call;
    {
        cout << "Function called\n";
    }
};

int main()
{
    top t;
    t.show();
}
