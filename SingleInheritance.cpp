#include <iostream>
#include <string>

using namespace std;

class Btech
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
    void displayBtech()
    {
        cout << name << " pursues B.tech" << endl;
    }
};

class CSE : public Btech
{
public:
    void displayCSE()
    {
        cout << name << " pursues B.tech in CSE" << endl;
    }
};

int main()
{
    CSE cse;
    cse.getName();
    cse.displayBtech();
    cse.displayCSE();

    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;

    return 0;
}