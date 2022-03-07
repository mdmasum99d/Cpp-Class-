#include<iostream>
using namespace std;
int main()
{
    int a,b,l;
    cin >>a >>b;
    cout << &a << endl << &b << endl;
    cout << sizeof(a) << endl << sizeof(b) << endl;
    l=(a>b) ? a:b;
    cout << l << endl;
    return 0;
}
