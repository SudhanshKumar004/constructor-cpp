//Parameterized Constructor;
#include<iostream>
using namespace std;
class Atm
{
    public:Atm(int a, int b)
    {
        if(a==1234 && b==1001)
        {
            cout << "Welcome\n";
        }
        else{
            cout << "Not a valid user\n";
        }
    };
};

int main()
{
    int ac,pwd;
    cout << "Enter account number\n";
    cin >> ac;
    cout << "Enter password\n";
    cin >> pwd;
    Atm obj(ac,pwd);
}
