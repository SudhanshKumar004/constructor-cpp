#include<iostream>
using namespace std;
class student
{
    public:int r;
    public:student(int rno)
    {
     r = rno;
    }
    void show()
    {
        cout << "Rno = " << r;
    }
};
int main()
{
    student s1(101);
    s1.show();
    student s2(s1); //shallow copy
    s2.show();
    s2.r = 400;
    student s3(s2);
    s3.show();
}
