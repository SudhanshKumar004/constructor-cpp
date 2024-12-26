#include<iostream>
using namespace std;
class AXIS
{
    int amount = 10000;
    friend class RBI;
};
class SBI
{
    int amount = 30000;
    friend class RBI;
};
class RBI
{
    public:void balanceaxis(AXIS a)
    {
        cout << "Balance of axis = " << a.amount << "\n";
    }
    public:void balancesbi(SBI s)
    {
        cout << "Balance of sbi = " << s.amount << "\n";
    }
};
int main()
{
    AXIS a;
    SBI s;
    RBI r;
    r.balanceaxis(a);
    r.balancesbi(s);
}
