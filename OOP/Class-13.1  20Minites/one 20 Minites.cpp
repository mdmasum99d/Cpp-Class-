#include<iostream>
using namespace std;
class student //the class
{
    public: //access specifier: public, private and protected
        int sID; //attributes (int variable)
        string sName; //attributes (string variable)
        double gpa; //attributes (double variable)
};
int main()
{
    student obj; // crate an object of student
    obj.sID = 1001;
    obj.sName = "MD MASUM";
    obj.gpa = 3.50;

    cout << "ID: " << obj.sID << endl;
    cout << "Name: "<< obj.sName << endl;
    cout << "GPA: " << obj.gpa << endl;

    return 0;
}
