#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <iostream>
using namespace std;

class Human {
public:
    string name;
    int age;
    double weight;

    // assign arguments to variables in the constructor
    Human(string name, int age, int weight) {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }


    void eat() {
        cout << this->name << " is eating" << endl;
    }

    void drink() {
        cout << this->name << " is drinking" << endl;
    }

    void sleep() {
        cout << this->name << " is sleeping" << endl;
    }

};


int main()
{
    // & is a reference or address of operator
    // * is a dereference operator
    // pointer stores the address of another variable

    Human human1("Rick", 65, 80);
    Human human2("Morty", 16, 60);



    cout << human1.name << endl;
    cout << human1.age << endl;

    human1.drink();


    return 0;
}
