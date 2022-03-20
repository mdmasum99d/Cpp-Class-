//Protected
#include<iostream>
using namespace std;
//Base class or parent class or super class
class one { //base class
protected:
    int a,b;
};
//derived class or child class or sub class
class two : public one{ // child class...aita base class ar protected data k access korteysey
public:
    void SetValue(int x, int y){
        a = x;
        b = y;
    }
    void getValue()
    {
        cout << a << endl;
        cout << b << endl;
        cout << a + b;
    }
};
int main()
{
    two obj;
    obj.SetValue(10,20);
    obj.getValue();
    return 0;
}
