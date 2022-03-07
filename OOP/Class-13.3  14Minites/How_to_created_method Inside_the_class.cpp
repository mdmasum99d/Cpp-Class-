///How to create method/function into the class

#include<iostream>
using namespace std;
class student //the class
{
  public: // access specifier: public, private and protected
  void display() // method/function definition inside the class
  {
    cout << "ID : " << 1001 << endl;
    cout << "Name : " << "Bulbul Ahmed" << endl;
    cout << "Gpa : " << 3.50 << endl;
  }
};
int main()
{
    student obj;
    obj.display();

    return 0;
}
