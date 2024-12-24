 #include<iostream>
 using namespace std;
 class dp
 {
     public:dp()
     {
         cout << "Memory Allocated";
     };

     ~dp()
     {
         cout << "Memory released";
     }
     void show()
     {
         cout << "\nWelcome\n";
     }
 };

 int main()
 {
     dp d1;
     d1.show();
 }
