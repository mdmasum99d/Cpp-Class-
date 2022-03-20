#include<iostream>
using namespace std;
class Example
{
private:
    int x,y;
public: //constructor always public
    //constructor inside
    Example()  // samney kono doroney return type deya jabey na
    {
        cout << "Value of x and y: ";
        cin >> x >> y;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "x + y = " << x+y << endl << endl;
        cout << "x - y = " << x-y << endl << endl;
    }
    //Example(); //constructor declaration outside ar jonno

};
//constructor outside
//constructor definition
/*Example :: Example()  // samney kono doroney return type deya jabey na
    {
        cout << "Value of x and y: ";
        cin >> x >> y;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "x + y = " << x+y << endl << endl;
        cout << "x - y = " << x-y << endl << endl;
    }
*/
int main()
{
    Example obj; // obj create hoiar satey satey constructor call hoi ortat constructor function ta key nisey call kortey hobey na
    //Example obj,obj1,obj2; // Multiple object deley automaticaly 2 ber print hobey sob golo karon constructor automaticaly object create korey
    return 0;
}
