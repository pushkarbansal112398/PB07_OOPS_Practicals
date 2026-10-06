// Program to illustrate the concept of hierarchical inheritance in C++
#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    d.eat();
    d.bark();

    c.eat();
    c.meow();
    cout << "\nName: Pushkar Bansal" << endl;
    cout << "URN: 2514151" << endl;
    return 0;
}