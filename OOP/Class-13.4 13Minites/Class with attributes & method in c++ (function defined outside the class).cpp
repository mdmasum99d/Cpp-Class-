///Class with attributes & method in c++(function defined outside the class)
#include<iostream>
#include<iomanip>
using namespace std;
class student // the class
{
public: //Access specifier: public, private and protected
    int sID; // attribute
    string sName ; // attribute
    double gpa; // attribute

    void display(); // method/function declaration
};
void student:: display () // method/function definition outside the class
{
    cout << left << setw(6) << "ID " << ":" <<  sID << endl; //obj1.sID or obj2.sID likha lagbey na karon aikaney amra sokol sID k patabo
    cout << left << setw(6) << "Name " << ":" <<  sName << endl;
    cout << left << setw(6) << "Gpa " << ":" <<  gpa << endl;
    cout << left << setw(6) << "------------------------\n\n";
}
int main()
{
    student obj1; //create and object of student
    //access attributes and set values
    obj1.sID = 1001;
    obj1.sName = "Md Masum";
    obj1.gpa = 3.50;
    obj1.display();
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
