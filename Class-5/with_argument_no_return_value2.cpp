#include<iostream>
using namespace std;
void sum(int,int);// function declaration
int main()
{
  sum(10,20);// function calling
  sum(15,200);// function calling
  sum(100,20);// function calling
  return 0;
}
//function definition
void sum(int x, int y)
{
    cout << "x + y = " << x+y << endl;
}
