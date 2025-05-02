// Write a    c++ program to demonstrate the use of dynamic_cast for safe downcasting in a polymorphic class hierarchy

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual ~Animal() {}
    virtual void make_Sound()
    {
        cout << "Make some sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() const
    {
        cout << "Woof! Woof!" << endl;
    }

    void fetch() const
    {
        cout << "Dog is fetching the ball!" << endl;
    }
};
class Cat : public Animal
{
public:
    void makeSound() const
    {
        cout << "Meow!" << endl;
    }

    void scratch() const
    {
        cout << "Cat is scratching!" << endl;
    }
};

int main()
{

    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    Dog *dogPtr = dynamic_cast<Dog *>(animal1);
    if (dogPtr)
    {
        cout << "animal1 is a Dog!" << endl;
        dogPtr->fetch();
    }
    else
    {
        cout << "animal1 is not a Dog!" << endl;
    }

    Cat *catPtr = dynamic_cast<Cat *>(animal2);
    if (catPtr)
    {
        cout << "animal2 is a Cat!" << endl;
        catPtr->scratch();
    }
    else
    {
        cout << "animal2 is not a Cat!" << endl;
    }

    Cat *invalidCast = dynamic_cast<Cat *>(animal1);
    if (invalidCast)
    {
        cout << "animal1 is a Cat!" << endl;
    }
    else
    {
        cout << "animal1 is not a Cat!" << endl;
    }

    // Clean up
    delete animal1;
    delete animal2;

    return 0;
}
