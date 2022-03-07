#include<iostream>
using namespace std;
void myFunction(string); // function declaration
int main()
{
    myFunction("Bulbul");// function calling
    myFunction("Aleeza");// function calling
    myFunction("Esha");// function calling
    return 0;
}
//function definition
void myFunction(string f)
{
    cout << f << endl;
}
