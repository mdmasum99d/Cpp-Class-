#include<iostream>
using namespace std;
int main()
{
    int c;
    int* pc;
    pc = &c;
    *pc = 22;
    cout << "Value at c = " << c << endl;
    return 0;
}
