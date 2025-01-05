/*
     POLY    MORPHISM
     (MANY) (FORMS)

    2 TYPES-
      -1 COMPILER TIME(Early Binding)
      -2 RUN TIME(Late Binding)

      -COMPILER TIME-
      - Function Overloading;
      - Operator Overloading;
      - Normal Object;
      - Multiple Function;

      -RUN TIME-
      - Function Overriding;
      - Virtual Function & Pure Virtual Function;
      - Super Class;
      - Abstract Class;
      - Pointer Object & Normal Object;
*/
#include<iostream>
using namespace std;

class RBI
{
    public:virtual void loan()
    {
        cout << "RBI class\n";
    }
    virtual void show()
    {
        cout << "RBI bank\n";
    }
};
class AXIS:public RBI
{
    public:void loan()
    {
        cout << "AXIS class\n";
    }
    void show()
    {
        cout << "AXIS bank\n";
    }
};
class SBI:public RBI
{
    public:void loan()
    {
        cout << "SBI class\n";
    }
};
int main()
{
    RBI *obj;
    AXIS a;
    SBI s;
    obj = &a;
    obj->loan();
    obj->show();
}

