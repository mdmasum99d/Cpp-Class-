#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "100";
    cout << stoi(str,nullptr,2) << endl;
    cout << "O => D : " << stoi(str,nullptr,8) << endl;
    cout << "H => D : " << stoi(str,nullptr,16) << endl;

    return 0;
}
