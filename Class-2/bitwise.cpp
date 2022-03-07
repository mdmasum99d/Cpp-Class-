#include<iostream>
using namespace std;
int main()
{
    int a=4,b=5;
    cout << "a & b = " <<(a&b)<< endl;//4
    cout << "a | b = " << (a|b) << endl;//5
    //left shift
    cout << "a << 1 = " << (a<<1) << endl;//8
    cout << "a << 2 = " << (a<<2) << endl;//16
    cout << "a << 3 = " << (a<<3) << endl;//32
    //right shift
    cout << "a >> 1 = " << (a>>1) << endl;//2
    cout << "a >> 2 = " << (a>>2) << endl;//1
    cout << "a >> 3 = " << (a>>3) << endl;//0
    //bitwise not
    cout << "~a = " << ~a << endl;
    return 0;
}
/*
bitwise not:
----------
a=4=100
~a=?
1's complement:ASCII 8
a  = 00000 100 = +4 [1st number is zero, more than this number is Positive]
~a = 11111 011 =

1's complement = 00000 100
2's complement =        +1
-----------------------------
               = 00000 101
*/
