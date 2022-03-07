#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << "D => O : " << setbase(8) << 15 << endl;
    cout << "D => H : " << setbase(16) << 15 << endl;
    cout << "O => D : " << setbase(10) << 017 << endl;
    cout << "H => D : " << setbase(10) << 0x17 << endl;
    return 0;
}
