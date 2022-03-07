#include<iostream>
using namespace std;
int sum();// function declaration
int main()
{
  int k = sum();
  cout <<"x + y = " << k;
}
//function definition
int sum()
{
    int x,y,r;
    cout << "value of x & y: ";
    cin >> x >> y;
    r = x+y;
    return r;
}
