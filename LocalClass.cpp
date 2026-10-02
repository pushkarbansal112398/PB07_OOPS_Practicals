#include <iostream>

using namespace std;

void test()
{
    int x = 10;
    class Demo
    {
        int value;

    public:
        Demo(int v)
        {
            value = v;
        }
        void display()
        {
            cout << "Value: " << value << endl;
        }
    };
    Demo d(x);
    d.display();
}
int main()
{
    test();

    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}