#include<iostream>
using namespace std;
int main()
{
    int *pc,c;
    cout << "Address of pointer variable pc: " << &pc << endl;
    cout << "Address of normal variable c: " << &c << endl << endl;
    c = 22;
    cout << "Value of normal variable c: " << c << endl << endl;
    pc = &c;
    cout << "Address stored at pointer variable pc: " << pc << endl;

    cout << "Address of normal variable c: " << &c << endl;
    cout << "Address of pointer variable pc: " << &pc << endl;



}
