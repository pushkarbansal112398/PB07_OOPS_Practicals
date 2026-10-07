// Program to illustrate the concept of ambiguity in single inheritance
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

class B : public A
{
public:
    void show()
    {
        cout << "Show from B" << endl;
    }
};

int main()
{
    B obj;

    obj.show();
    obj.A::show();
    cout << "Name: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}