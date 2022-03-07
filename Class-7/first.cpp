#include<iostream>
using namespace std;
int main()
{
    int c = 22;
    int *pc;
    pc = &c;
    cout << "Value at pc = " << pc << endl;
    cout << "Value at c = " << c << endl;
    cout << "Value at *pc = " << *pc << endl;
    return 0;
}
