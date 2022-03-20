#include<iostream>
using namespace std;
int x = 100;//global variable
int main()
{
    int x = 10; //local variable
    {
        cout << x << endl; //10
    }
    {
        int x = 20;// Local variable
        cout << x << endl;//20
    }
    cout << x << endl;//10 // aikaney  local variable 1st ta pabey
    return 0;
}
/*
*block mani 1 joda curley backet ar moddey ja takey takey
  block boley
#block ar moddey variable k notun babey declar kortey pari
*/
