///Class with attributes & method in c++(function defined inside the class
#include<iostream>
#include<iomanip>
using namespace std;
class student // the class
{
  public: //Access specifier: public, private and protected
      int sID; // attriute
      string sName ; // attriute
      double gpa; // attriute
      // ai display ta hossey sobar jonno jakey kortey sai takey aitar maddmay koratey parbo
      void display () // method/function definition inside the class
      {
          cout << left << setw(6) << "ID " << ":" <<  sID << endl; //obj1.sID or obj2.sID likha lagbey na karon aikaney amra sokol sID k patabo
          cout << setw(6) << "Name " << ":" <<  sName << endl;
          cout << setw(6) << "Gpa " << ":" <<  gpa << endl;
          cout << setw(6) << "------------------------\n\n";
      }
};
int main()
{
   student obj1; //create and object of student
   //access attributes and set values
   obj1.sID = 1001;
   obj1.sName = "Md Masum";
   obj1.gpa = 3.50;
   obj1.display(); //method ta key call korley obj1 ar sob kiso print nibey karon amra agey akta method baniye raksi oita tey cout kora asay

   student obj2; //create and object of student
   //access attributes and set values
   obj2.sID = 1001;
   obj2.sName = "Md Masum";
   obj2.gpa = 3.50;
   obj2.display(); // call the display method

   student obj3; //create and object of student
   //access attributes and set values
   obj3.sID = 1001;
   obj3.sName = "Md Masum";
   obj3.gpa = 3.50;
   obj3.display(); // call the display method
}
