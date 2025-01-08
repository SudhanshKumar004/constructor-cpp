#include<iostream>
using namespace std;
class animal
{
    public:virtual void sound()=0;
};
class cat:public animal
{
    public:void sound()
    {
        cout <<"\nMeow Meow\n";
    }
};
class dog:public animal
{
    public:void sound()
    {
        cout << "\nBarking\n";
    }
};

class lion:public animal
{
    public:void sound()
    {
        cout << "\nRoaring\n";
    }
};

int main()
{
    animal *p;
    dog d;
    lion l;
    cat c;
    p=&l;
    p->sound();
}
