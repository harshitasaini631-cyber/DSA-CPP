#include <iostream>
using namespace std;

class Person{
    public:
         string name;
         int age;

         Person(string n, int a){
             name = n;
             age = a;
         }

         void show(){
            cout << name << " " << age;
         }
};

int main(){
    Person p("sayi",20);  //p is an object of class Person
    //sayi goes into name n and 20 goes into age a.
    p.show();
    return 0;

}

/*A special function that runs automatically when an object is created.

It has the same name as the class

It has no return type

It is used to initialize variables


When we create a Person object

It automatically assigns:

name = n

age = a*/ 