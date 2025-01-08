#include<iostream>
using namespace std;
class vehicle
{
    public:virtual void sound()=0;
};
class train:public vehicle
{
    public:void sound()
    {
        cout << "\nChal Chaiyya Chaiyya\n";
    }
};

class car:public vehicle
{
    public:void sound()
    {
     cout << "\nRatatata\n";
    }
};

class airplane:public vehicle
{
    public:void sound()
    {
        cout << "\nShiiuuuuuuu\n";
    }
};
class bicycle:public vehicle
{
    public:void sound()
    {
        cout << "\ntring tring\n";
    }
};

int main()
{
    vehicle *p;
    car c;
    airplane a;
    train t;
    bicycle b;
    p=&c;
    p->sound();
}
