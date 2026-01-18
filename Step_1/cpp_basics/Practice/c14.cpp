#include <iostream>
using namespace std;

int main() {

    int choice;
    cout << "Menu:\n";
    cout << "1 → Area of Square\n";
    cout << "2 → Area of Circle\n";
    cout << "3 → Area of Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {

        case 1: {
            float side;
            cout << "Enter side: ";
            cin >> side;
            cout << "Area of Square = " << side * side;
            break;
        }

        case 2: {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of Circle = " << 3.14 * radius * radius;
            break;
        }

        case 3: {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Area of Triangle = " << 0.5 * base * height;
            break;
        }

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
