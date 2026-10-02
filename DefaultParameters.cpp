#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    int rollNo;

public:
    void setData(string n = "XYZ", int rn = 0)
    {
        name = n;
        rollNo = rn;
    }

    void display()
    {
        cout << "\nStudent's Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1;
    s1.setData("Pushkar Bansal", 2514151);
    s1.display();

    Student s2;
    s2.setData();
    s2.display();

    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}