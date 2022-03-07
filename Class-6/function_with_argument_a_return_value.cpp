///function overloading
#include<iostream>
using namespace std;
int largest(int x,int y); // function declaration
int largest(int x,int y,int z); // function declaration
int largest(int x,int y,int z,int k); // function declaration
int main()
{
    int r = largest(100,20);//function calling
    cout << r << endl;
    int r1 = largest(100,20,30);
    cout << r1 << endl;
    int r2 = largest(100,20,300,400);
    cout << r2 << endl;
    return 0;
}
//function definition
int largest(int x, int y){
    int m = (x>y) ? x:y;
    return m;
}
int largest(int x,int y,int z){
    int m = (x>y && x>z) ? x:(y>z)?y:z;
    return m;
}
int largest(int x,int y,int z,int k){
  int m = (x>y && x>z && x>k) ? x: (y>z && y>k)?y:(z>k)?z:k;
  return m;
}
