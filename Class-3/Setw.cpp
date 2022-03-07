#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=1,ab=10,abc=100,abcd=1000;

  cout << "C++ Manipulators" << endl;
  cout << "-----------------" << endl;
  //cout << setfill('*') << endl;
  cout << setw(4) << a << endl;
  cout << setw(4) << ab << endl;
  cout << setw(4) << abc << endl;
  cout << setw(4) << abcd << endl;
  cout << "---------------------\n\n";

  cout << "a = " << setw(5) << a << endl;
  cout << "ab = " << setw(5) << ab << endl;
  cout << "abc = " << setw(5) << abc << endl;
  cout << "abcd = " << setw(5) << abcd << endl;
  cout << "------------------------\n\n";

  cout << setw(7) << "a = " << setw(5) << a << endl;
  cout << setw(7) << "ab = " << setw(5) << ab << endl;
  cout << setw(7) << "abc = " << setw(5) << abc << endl;
  cout << setw(7) << "abcd = " << setw(5) << abcd << endl;
  cout << setw(7) << "-------------------------------\n\n";

  cout << left << setw(7) << "a = " << right << setw(5) << a << endl;
  cout << left << setw(7) << "ab = " << right << setw(5) << ab << endl;
  cout << left << setw(7) << "abc = " << right << setw(5) << abc << endl;
  cout << left << setw(7) << "abcd = " << right << setw(5) << abcd << endl;

    return 0;

}
/**
Manipulators Operator:
-----------------------
endl;
fixed
left
right

Manipulators function:
----------------------
setw(value)
setprecision(value)
setfill(c)
setbase(base)
*/
