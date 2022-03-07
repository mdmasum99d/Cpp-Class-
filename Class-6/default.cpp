#include<iostream>
using namespace std;
int sum(int a=5,int b=7);
int main()
{
  cout << sum() << endl;
  cout << sum(10) << endl;
  cout << sum(10,20) << endl;
}
int sum(int a,int b){
  return a+b;
}
