#include<iostream>
using namespace std;
void sum(int, int);//function definition
int main()
{
  int a = 10,b = 20;
  sum(a,b);
  return 0;
}
//function definiton
void sum(int x,int y){
  cout << "x+y = " << x+y << endl;
}
