///How to create method/function outside the class

#include<iostream>
using namespace std;
class student
{
public:  //access specifier: public, private and protected
    void display(); //method/function declaration
};
//method/function definition outside the class
void student :: display()
{
    cout << "ID: " << 1001 << endl;
    cout << "Name: " << "Bulbul Ahmed" << endl;
    cout << "Gpa: " << 3.50 << endl;
}
int main()
{
    student obj; // create an object of student
    obj.display(); // call the display method
    return 0;
}
