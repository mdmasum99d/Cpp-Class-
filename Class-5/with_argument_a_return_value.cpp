#include<iostream>
using namespace std;
int sum(int x, int y);// function definiton
int main()
{
    int a,b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;
    int r = sum(a,b);//function calling
    cout << "a+b = " << r << endl;
    return 0;

}
//function definition
int sum(int x, int y){
 int k;
 k = x+y;
 return k;
}
