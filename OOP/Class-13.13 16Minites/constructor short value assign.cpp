///Constructor Default vs Parameter
#include<iostream>
using namespace std;
class Example
{
private:
    int a,b;
public:
    //sodo constructor ar ketrey amra ai babey o liktey pari
    Example():a(0),b(0){}; //Default constructor
    Example(int x, int y):a(x),b(y){}; //Parameterized constructor
    void display();

};
//outside

void Example :: display()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl << endl;
    cout << "a + b = " << a+b << endl;
    cout << "a - b = " << a-b << endl;
    cout << "a * b = " << a*b << endl << endl;

}
int main()
{
    Example obj;
    obj.display(); // aikaney pabey holo default golo mani 1ta
    Example obj1(7,5);
    obj1.display();

    return 0;
}

