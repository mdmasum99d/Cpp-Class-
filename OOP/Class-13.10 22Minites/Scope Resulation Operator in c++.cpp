/**
Scope resolution operator:
    :: is called scope resolution operator.
It is used to define a function outside a class

*/

#include<iostream>
using namespace std;
class Example
{
public:
    //function declaration
    void output();
    void show();
};
void Example :: output()
{
    cout << "Welcome Everyone!\n";
}
void Example :: show(){
    cout << "Inside show function\n";
}
int main()
{
    Example ob;
    ob.output();
    ob.show();
    return 0;
}
