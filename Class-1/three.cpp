#include<iostream>
using namespace std;
int main()
{
    int x;
    x=10;

    cout << "x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    x=100;
    cout << "x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    return 0;
}
