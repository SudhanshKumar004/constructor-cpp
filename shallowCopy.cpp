#include <iostream>
using namespace std;

class student
{
    int rno;
    public:student(int rno)
    {
       this-> rno = rno; // this pointer
    }
    void show()
    {
        cout << "Rno = " <<
         rno ;
    }
};
int main()
{
    student s(101);
    s.show();
 }
