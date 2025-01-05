#include <iostream>
using namespace std;
class college
{
    protected:void show()
    {
        cout << "\n College \n";
    }
};
class student:public college
{
    public:void msg()
    {

        cout << "\n Student \n";
        show();
    }

};
int main()
{
    student c;
    c.msg();
}
