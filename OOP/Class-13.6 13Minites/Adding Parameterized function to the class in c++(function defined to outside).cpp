///Parameter function into a class...outside
#include<iostream>
#include<iomanip>
using namespace std;

class student // the class
{
public: //access specifier: public, private and protected
    int sID; //attributes
    string sName; //attributes
    double gpa; //attributes

    //method/function declaration
    void setValue(int x, string y, double z); // sailey same variable set kortey pari jaigola opor a desi oigoal
    void display();
};
// setValue function definition outside the class
void student::setValue(int x, string y, double z)
{
    sID = x;
    sName = y;
    gpa = z;
}
// display function definition outside the class
void student:: display ()
{
    cout << left << setw(6) << "ID " << ":" <<  sID << endl; //obj1.sID or obj2.sID likha lagbey na karon aikaney amra sokol sID k patabo
    cout << left << setw(6) << "Name " << ":" <<  sName << endl;
    cout << left << setw(6) << "Gpa " << ":" <<  gpa << endl;
    cout << left << setw(6) << "------------------------\n\n";
}
int main()
{
    student obj; // create an object of student
    obj.setValue(1001,"Md Masum",3.67); // 3ta argument patabo...aikan thekey setvalue function definition ar kase data patabo
    obj.display(); // call the display method

    student obj1; // create an object of student
    obj1.setValue(1002,"Hirdoy Mojumder",3.41); // 3ta argument patabo
    obj1.display(); // call the display method

    student obj2; // create an object of student
    obj2.setValue(1003,"Shorab Hossain",3.78); // 3ta argument patabo
    obj2.display(); // call the display method
    return 0;
}
