#include<iostream>
using namespace std;
int main()
{
   cout << ((3!=5) &&(3<5)) << endl;
   cout << ((3!=5) && (3>5)) << endl;
   cout << ((3!=5)|| (3>5)) << endl;
   cout << ((3==5) || (3>5)) << endl;
   cout << !(3==5) << endl;
   cout << !(3==3) << endl;
}
