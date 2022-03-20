#include<iostream>
using namespace std;
class student{
public:
    int sID;
    string sName;
    double gpa;
    void getValue()
    {
        cout << sID << endl;
        cout << sName << endl;
        cout << gpa << endl << endl;
    }
};
int main()
{
    student obj1;
    obj1.sID = 1001; // dot operator ar maddomey amra class ar      member golo k access kortey parsi
    obj1.sName = "BulBul Ahmed";
    obj1.gpa = 3.50;
    obj1.getValue();

    student obj2;
    student *p = &obj2; ///p holo pointer type variable
    p -> sID = 1002; // pointer type variable holey amra . use kortey parbo na .... arrow use kortey hobey
    p -> sName = "Md Masum";
    p -> gpa = 3.70;
    p -> getValue();
    return 0;
}
