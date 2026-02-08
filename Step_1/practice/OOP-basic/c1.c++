#include <iostream>
using namespace std;

class Student{
    public:      //access specifier.
    string name;
    int age;

    void display(){  //member fn. fn inside a class. can directly access name and age as theybelong to same class
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

//main fn starts here
int main(){
    Student s1;
    s1.name = "niru";
    s1.age = 20;

    s1.display();
    return 0;
}

//void -> use when a fn does a task but does not return a value for eg diplaying.