///Constructor Default vs Parameter
#include<iostream>
using namespace std;
class Example{
private:
    int a,b;
public:
    //Default constructor
    //Default constructor ta amra amney banaisi ar bitour value gola amnei deisi aigola sob ketey dibo..abong object create ta o kete dibo .....default constructor amra na deley o aita compailer auto niye ney..amra jodi na banai . sailey amra raktey pari kintour ar bitour kono value dibo na ...tarpor object create korbo
    Example(){ // () backet ar moddey kono kiso nai tai default constructor
        cout << "Default constructor\n";
        a = 0;
        b = 0;
    }
    //Parameterized constructor
    Example(int x, int y){ // ()backet ar moddey parameter deya asay tai aita parameterized constructor
        cout << "Parameterized constructor\n";
        a = x; // x ar value a ar moddey store korbo
        b = y; // y ar value b ar moddey store korbo
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
        cout << "a + b = " << a+b << endl;
        cout << "a - b = " << a-b << endl;
        cout << "a * b = " << a*b << endl << endl;

    }
};
int main()
{
    Example obj;
    obj.display(); // aikaney pabey holo default golo mani 1ta
    Example obj1(7,5); //constructor object create ar satey value patai debo..ortat value pass korbo 7 jabey x ar kase 5 jabey y ar kasey..amra object ar bitour value initilization kore dissi
    obj1.display(); // aikaney pabey holo Parameterized ar moddomey pataisi jaiti oiti pabey mani 2ta

   return 0;
}
