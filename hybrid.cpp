#include<iostream>
using namespace std;
class RBI
{
    public:void RBImsg()
    {
        cout << "RBI\n";
    }
};
class SBI:public RBI
{
    public:void SBImsg()
    {
        cout << "SBI\n";
    }
};


class PNB:public RBI
{
    public:void PNBmsg()
    {
        cout << "PNB\n";
    }
};


class AXIS:public RBI
{
    public:void AXISmsg()
    {
        cout << "AXIS\n";
    }
};

 int main()
 {
    SBI s;
    s.SBImsg();
    s.RBImsg();
    PNB p;
    p.PNBmsg();
    p.RBImsg();
    AXIS a;
    a.AXISmsg();
    a.RBImsg();
 }
