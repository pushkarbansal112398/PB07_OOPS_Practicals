// To illustrate the use of class and object

#include <iostream>
#include <string>

using namespace std;

class Student
{ // class
public:
    string name;
    int rollNo;
    string branch;
    char section;

    void displayDetails()
    {
        cout << "\n----- STUDENT-DETAILS -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Branch: " << branch << endl;
        cout << "Section: " << section << endl;
        cout << "---------------------------" << endl;
    }
};

int main()
{
    Student s1; // object

    s1.name = "Pushkar Bansal";
    s1.rollNo = 2514151;
    s1.branch = "CSE";
    s1.section = 'D';

    s1.displayDetails();

    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}