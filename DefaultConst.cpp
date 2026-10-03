#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    Student()
    { // default constructor
        name = "XYZ";
        rollNo = 101;
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
    Student s1; // default constructor called automatically
    s1.display();

    s1.name = "Pushpa";
    s1.rollNo = 151;
    s1.display();

    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;

    return 0;
}