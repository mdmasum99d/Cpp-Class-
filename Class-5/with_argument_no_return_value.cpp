#include<iostream>
using namespace std;
void sum(int,int);//function declaration
int main()
{
    int x,y;
    cout << "Enter the value of x & y: ";
    cin >> x >> y;
    sum(x,y);
    return 0;
}
//function defenition
void sum(int x, int y){
    cout << "x+y = " << x+y << endl;
}
