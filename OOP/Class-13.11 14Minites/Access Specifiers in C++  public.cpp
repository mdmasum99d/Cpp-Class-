//Public keyword
#include<iostream>
using namespace std;
class one{
public:
    int a,b;
    void sum()
    {
        cin >> a >> b;
        cout << a+b << endl;
    }
};
int main()
{
    one obj;
    //obj.a = 10;
    //obj.b = 20;
    //cout << obj.a << endl;
    //cout << obj.b << endl;
    //cout << obj.a + obj.b << endl;
    obj.sum();
    return 0;
}
