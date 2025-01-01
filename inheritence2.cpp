#include <iostream>
using namespace std;
class A
{
    int a;
    public:A()
    {
        cout << "A memory\n";
    }
    ~A()
    {
        cout << "A Memory released\n";
    }
    public:void show()
    {
    cout << "A\n";
    }

};
class B:public A
{
    int b;
    public:B()
    {
        cout << "B memory\n";
    }
    ~B()
    {
        cout << "B memory released\n";
    }
    public:void msg()
    {
    cout << "B\n";
    }
};
class C:public B
{
    int s;
    public:C()
    {
        cout << "C memory\n";
    }
    ~C()
    {
        cout << "C memory released\n";
    }
    public:void see()
    {
        cout << "C\n";
    }
};
int main()
{
    C a;
    a.show();
    a.msg();
    a.see();
}
