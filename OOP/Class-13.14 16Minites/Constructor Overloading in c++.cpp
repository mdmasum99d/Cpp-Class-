#include<iostream>
using namespace std;
class Example
{
private:
    int a,b;
    string name;
public:
    //constructor with no parameter
    Example()
    {
        cout << "Constructor one : \n";
        a = b = 0;//a=0, b=0
    }
    //constructor with one parameter
    Example(int x)
    {
        cout << "Constructor two : \n";
        a = b = x;//a = x, b = x
    }
    //constructor with two parameter
    Example(int x, int y)
    {
        cout << "Constructor three: \n";
        a = x;
        b = y;
    }
    //constructor with one parameter
    Example(string sname)
    {
        cout << "Constructor four: \n";
        name = sname;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }
    void displayName()
    {
        cout << "Name : " << name << endl;
    }
};
int main()
{
    Example obj; // kono argument nai tai aita opor a constructor a check korbey kontar moddey kono parameter nai takey show korabey
    obj.display();

    Example obj2(5); // ai argument ta opro a check dibey jay kon constructor a akta parameter asay takey show korabey
    obj2.display();

    Example obj3(10,20);// ai argument ta opro a check dibey jay kon constructor a doita parameter asay takey show korabey
    obj3.display();

    Example obj4("Md Masum");
    obj4.displayName();

}
//ager class ar moto code short korey pelbo
