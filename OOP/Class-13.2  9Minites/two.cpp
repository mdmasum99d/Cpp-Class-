#include<iostream>
using namespace std;
class Student // the class
{
    public:
    int id; // attributes
    string name; // attributes
    string university; // attributes
    double gpa; // attributes
};
int main()
{
   Student obj; // created object
   obj.id = 101;
   obj.name = "Md Masum";
   obj.university = "Sonargaon University";
   obj.gpa = 4.33;

   cout << "Student Id : " << obj.id << endl;
   cout << "Student Name : " << obj.name << endl;
   cout << "University : " << obj.university << endl;
   cout << "Gpa : " << obj.gpa << endl << endl;

   Student obj1; // created object
   obj1.id = 102;
   obj1.name = "Hirdoy Mojumder";
   obj1.university = "Premesia University";
   obj1.gpa = 3.98;

   cout << "Student Id : " << obj1.id << endl;
   cout << "Student Name : " << obj1.name << endl;
   cout << "University : " << obj1.university << endl;
   cout << "Gpa : " << obj1.gpa << endl;

   return 0;
}
