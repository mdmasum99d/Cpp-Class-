#include<iostream>
using namespace std;
void test1();
void test2();
void test3(int x);
void test4(int x,int y);

int x = 100;//global variable
int y = 200;//global variable
int z = 300;//global variable
int main()
{
    int x = 10; //local variable
    {
        cout << x << endl; //10
        //jodi  local and gloabl variable ar name same hoi tokhon jodi local variable k pai tokhon amra jodi sai  gloabl variable k access korabo tokon 2 ta scope resulation operator ditey hobey(::)
        //cout << ::x << endl;///100 akhon global variable ar man dekabey
    }
    {
        int x = 20;// Local variable
        cout << x << endl;//20
    }
    cout << x << endl;//10
    test1(); //100
    test2(); //222
    test3(666);
    test4(5,7);
    return 0;
}
void test1()
{
    cout << x << endl; // global variable k amra function ar bitour thekey access koratey pari
}
void test2()
{
    int x = 222;
    cout << x << endl;//222
}
void test3(int x) {
    cout << x << endl; ///666
}
void test4(int x,int y) {
    cout << "Test4: " << endl;
    cout << x << "\t";//5
    cout << y << "\t"; //7
    cout << z << endl; //300 ...aita global variable thekey pabey
}

