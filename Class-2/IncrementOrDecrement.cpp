#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "------------\n";
    cout << a++ << endl;//10  11
    cout << a << endl;//11
    cout << ++a << endl;//12
    cout << a << endl;//12
    cout << --a << endl;//11
    cout << a-- << endl;//11 10
    cout << a << endl;//10
    return 0;
}
