// Program to illustrate the concept of multi-level inheritance in C++
#include <iostream>
using namespace std;

class Grandparent
{
public:
    void showGrandparent()
    {
        cout << "I am Grandparent" << endl;
    }
};

class Parent : public Grandparent
{
public:
    void showParent()
    {
        cout << "I am Parent" << endl;
    }
};

class Child : public Parent
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

    obj.showGrandparent();
    obj.showParent();
    obj.showChild();
    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}