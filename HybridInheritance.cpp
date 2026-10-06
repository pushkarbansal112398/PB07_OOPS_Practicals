// Program to illustrate the concept of hybrid inheritance in C++
#include <iostream>
using namespace std;

class Person
{
public:
    void showPerson()
    {
        cout << "I am a Person" << endl;
    }
};

class Student : virtual public Person
{
public:
    void showStudent()
    {
        cout << "I am a Student" << endl;
    }
};

class Employee : virtual public Person
{
public:
    void showEmployee()
    {
        cout << "I am an Employee" << endl;
    }
};

class Intern : public Student, public Employee
{
public:
    void showIntern()
    {
        cout << "I am an Intern" << endl;
    }
};

int main()
{
    Intern obj;

    obj.showPerson();
    obj.showStudent();
    obj.showEmployee();
    obj.showIntern();
    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}