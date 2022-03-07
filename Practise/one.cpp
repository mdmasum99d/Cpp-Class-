#include<iostream>
#include<iomanip>
using namespace std;
class student
{
public: //access specifier: public,private and protected
    int sID; // attribute
    string sName; // attribute
    double gpa; // attribute

    void display()
    {
        cout << left << setw(6) << "ID" << ":" << sID << endl;
        cout << left << setw(6) << "Name" << ":" << sName << endl;
        cout << left << setw(6) << "Gpa" << ":" << gpa << endl;
        cout << left << setw(6) << "-----------------------\n\n";

    }
};
int main()
{
   student obj1; // created and object of student
   //access attributes and set values
   obj1.sID = 1001;
   obj1.sName = "Md Masum";
   obj1.gpa = 3.50;
   obj1.display();

   student obj2; // create object of student
   // access attributes and set values
   obj2.sID = 1002;
   obj2.sName = "Hirdoy";
   obj2.gpa = 3.98;
   obj2.display();

   student obj3; // create object of student
   // access attributes and set values
   obj3.sID = 1003;
   obj3.sName = "Shorab";
   obj3.gpa = 4.00;
   obj3.display(); // call the display method
}
