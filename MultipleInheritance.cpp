// Program to illustrate the concept of multiple inheritance in C++
#include <iostream>
using namespace std;

class Father
{
public:
    void showFather()
    {
        cout << "I am Father" << endl;
    }
};

class Mother
{
public:
    void showMother()
    {
        cout << "I am Mother" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void showChild()
    {
        cout << "I am Child" << endl;
    }
};

int main()
{
    Child obj;

    obj.showFather();
    obj.showMother();
    obj.showChild();
    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}