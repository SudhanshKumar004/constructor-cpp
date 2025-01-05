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
    public:void hello()
    {
        cout << "\nHello\n";
    }
};
class customer:private sbi,private axis
{

    public:customer()
    {
        cout << "Customer memory\n";
        hello();
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

