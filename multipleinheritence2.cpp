#include <iostream>
using namespace std;
class sbi
{
    public:sbi()
    {
        cout << "SBI memory\n";
    }

    ~sbi()
    {
        cout << "SBI delete\n";
    }
};
class axis
{

    public:axis()
    {
        cout << "AXIS memory\n";
    }

    ~axis()
    {
        cout << "AXIS delete\n";
    }
};
class customer:public sbi,public axis
{

    public:customer()
    {
        cout << "Customer memory\n";
    }

    ~customer()
    {
        cout << "Customer delete\n";
    }
};
int main()
{
  customer ct;
}
