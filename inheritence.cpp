/* INHERITANCE-

    1. Single: A -> B

    2. Multilevel: A -> B -> C

    3. Multiple: A <- C -> B

    4. Hierarchical: B -> A <- C
                          ^
                          D

    5. Hybrid:  A  C
               !  !
               B  D
               ^
               |  !
               |  E
               |  ^
               -F--

     - "IT WILL TAKE MEMORY"
     - "Number of objects will be less"

*/

//SINBLE INHERITANCE;v
#include<iostream>
using namespace std;
class RBI
{
    public:RBI()
    {
        cout << "\nRBI Memory\n";
    }
    ~RBI()
    {
        cout << "\nRBI Memory released\n";
    }
    public:void show()
    {
        cout << "\nRBI CLASS\n";
    }
};
class SBI:public RBI
{

    public:SBI()
    {
        cout << "\n SBI Memory \n";
    }
    ~SBI()
    {
        cout << "\nSBI memory releasad\n";
    }
    public:void msg()
    {
        cout << "\nSBI CLASS\n";
    }
};

int main()
{
    SBI s;
    s.show();
    s.msg();
}
