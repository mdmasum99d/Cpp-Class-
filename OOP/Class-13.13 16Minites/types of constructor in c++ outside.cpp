///Constructor Default vs Parameter
#include<iostream>
using namespace std;
class Example
{
private:
    int a,b;
public:
    Example();
    Example(int x, int y);
    void display();

};
//outside
//Default constructor

Example :: Example ()  // () backet ar moddey kono kiso nai tai default constructor
{
    cout << "Default constructor\n";
    a = 0;
    b = 0;
}
//Paremeterized constructor
Example :: Example (int x, int y)  // ()backet ar moddey parameter deya asay tai aita parameterized constructor
{
    cout << "Paremetarized constructor\n";
    a = x; // x ar value a ar moddey store korbo
    b = y; // y ar value b ar moddey store korbo
}
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

