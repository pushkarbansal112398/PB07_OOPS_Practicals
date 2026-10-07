// Program to illustrate the concept of ambiguity in multiple inheritance
#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Show from A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "Show from B" << endl;
    }
};

class C : public A, public B
{
public:
    void show()
    {
        cout << "Show from C" << endl;
    }
};

int main()
{
    C obj;

       obj.A::show();
    obj.B::show();
    obj.show();
    cout << "Name: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}
