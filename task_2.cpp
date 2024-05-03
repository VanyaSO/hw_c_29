#include "iostream"
using namespace std;

//Завдання №2
//Створити базовий клас «Домашня тварина» і похідні
//класи «Собака», «Кішка», «Папуга», «Хом’як». За допомогою конструктора встановити ім’я кожної тварини і її
//        характеристики.
//Реалізуйте для кожного з класів функції:
//■ Sound — видає звук тварини (пишемо текстом в консоль);
//■ Show — виводить на екран ім’я тварини;
//■ Type — виводить на екран назву її підвиду.

class Pet
{
protected:
    string _name;
    const string _type;
    int _age;

    Pet() = default;
    Pet(string name, string type, int age): _name(name), _type(type), _age(age) {};

    virtual void Sound() = 0;
    virtual void Show() = 0;
    virtual void Type() = 0;
};

class Dog: public Pet
{
public:
    Dog(string name, int age):Pet(name, "Dog", age) {};
    void Sound() override
    {
        cout << "Hello i am dog" << endl;
    }

    void Show() override
    {
        cout << "My name " << _name << endl;
    }

    void Type() override
    {
        cout << _type << endl;
    }
};

class Cat: public Pet
{
public:
    Cat(string name, int age):Pet(name, "Cat", age) {};
    void Sound() override
    {
        cout << "Hello i am cat" << endl;
    }

    void Show() override
    {
        cout << "My name " << _name << endl;
    }

    void Type() override
    {
        cout << _type << endl;
    }
};

class Parrot: public Pet
{
public:
    Parrot(string name, int age):Pet(name, "Dog", age) {};
    void Sound() override
    {
        cout << "Hello i am parrot" << endl;
    }

    void Show() override
    {
        cout << "My name " << _name << endl;
    }

    void Type() override
    {
        cout << _type << endl;
    }
};

class Hamster: public Pet
{
public:
    Hamster(string name, int age):Pet(name, "Hamster", age) {};
    void Sound() override
    {
        cout << "Hello i am hamster" << endl;
    }

    void Show() override
    {
        cout << "My name " << _name << endl;
    }

    void Type() override
    {
        cout << _type << endl;
    }
};

int main()
{
    Dog dog("Pes", 2);
    Cat cat("Cit", 5);
    Parrot parrot("Papyga", 1);
    Hamster hamster("Homyak", 0);

    cat.Show();
    parrot.Sound();
    hamster.Type();
    dog.Sound();

    return 0;
}