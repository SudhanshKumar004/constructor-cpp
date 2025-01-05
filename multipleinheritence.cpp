/*
    Multiple inheritance -
    "In a multiple inheritance we can inherit more than one classes at a time";
*/

#include <iostream>
using namespace std;
class sbi
{
    public:void sbiacnt()
    {
        cout << "SBI\n";
    }
};
class axis
{
    public:void axisacnt()
    {
        cout << "AXIS\n";
    }
};
class customer:public sbi,public axis
{
    public: void msg()
    {
        cout << "Welcome\n";
    };
};
int main()
{
  customer ct;
  ct.msg();
  ct.sbiacnt();
  ct.axisacnt();
}
