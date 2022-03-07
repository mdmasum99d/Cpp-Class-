//Function with no arguments and no return value
#include<iostream>
using namespace std;
void sum();//Function declaration
int main()
{
    sum();//function calling
}
//function definition
void sum()
{
    int x,y,r;
    cout << "Value of x & y: ";
    cin >> x >> y;
    r=x+y;
    cout << "x+y = " << r << endl;

}
