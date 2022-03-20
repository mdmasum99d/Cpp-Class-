//Private
#include<iostream>
using namespace std;
class one
{
private:
    int a,b;
public: //private k class ar bairey thekey access kora jai na tai class ar moddey agey public korlam class ar moddey function set korlam
    void SetValue(int x, int y){
        a = x;//a ar moddey value store korlam
        b = y;//b ar moddey value store korlam
    }
    void getValue()
    {
        cout << a << endl;
        cout << b << endl;
        cout << a+b << endl;
    }
};
int main()
{
    one obj;
    obj.SetValue(10,20);
    obj.getValue();
    return 0;
}
