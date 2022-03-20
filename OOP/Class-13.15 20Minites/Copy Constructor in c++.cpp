#include<iostream>
using namespace std;
class Example{
private:
    int a,b;
public:
    //Default constructor
    Example(){
        cout << "Default constructor\n";
        a = b = 0;
    }
    //Parameterized constructor
    Example(int x, int y){
        cout << "Parameterized constructor\n";
        a = x;
        b = y;
    }
    //copy constructor user defined part ta jodi na o liki ta holey kaj korbey compailer aita nijey nijey toiri korey ney
    //copy constructor
    //const keyword ditey pari na deley o problem nai
    Example(const Example &ami){ //copy constructor a parameter hobey class type ta ....class ar jai name ta sai tai dibo parameter a 1st a. 2nd a tarpor ampersand(&) dibo...3rd ar por jay kono akta variable name dibo ...ampersand holo reference operator
        cout << "Copy constructor: \n";
        a = ami.a; //10 //value gola obj2 thekey obj3 te passi copy constructor ar maddomey
        b = ami.b; //15

    }
    void display(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    Example obj1; //Default constructor
    obj1.display();

    Example obj2(10,15); //Parameterized constructor
    obj2.display();

    Example obj3(obj2); // copy constructor is called //obj2 ar data amra notun obj3 k ditesi ortat copy hossey...aknon obj3 ....obj2 ar sokol data pabey ortat 10,15 pabey
    obj3.display();

    //Example obj4(obj1);//copy constructor is called
    Example obj4= obj1;//()backet ar poribortey amra = equl ditey parbo
    obj4.display();

    return 0;
}
