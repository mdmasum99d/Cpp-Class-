#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a = 3.569;

    cout << setprecision(1) << a << endl;
    cout << fixed << setprecision(1) << a << endl;
    cout << fixed << setprecision(2) << a << endl;
    cout << fixed << setprecision(3) << a << endl;
    cout << fixed << setprecision(4) << a << endl;
    cout << fixed << setprecision(5) << a << endl;
    cout << fixed << setprecision(6) << a << endl;
    return 0;
}
