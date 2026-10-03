// Program to illustrate the concept of inline functions
#include <iostream>

using namespace std;

class Calculator
{
public:
    int square(int);
    int cube(int);
};

inline int Calculator::square(int n)
{
    return n * n;
}

inline int Calculator::cube(int n)
{
    return n * n * n;
}

int main()
{
    Calculator obj;

    cout << "Square of 5 = " << obj.square(5) << endl;
    cout << "Cube of 5 = " << obj.cube(5) << endl;

    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}