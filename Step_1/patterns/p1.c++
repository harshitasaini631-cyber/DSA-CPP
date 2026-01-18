#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {        // outer loop → rows
        for (int j = 1; j <= 4; j++) {    // inner loop → columns (stars)
            cout << "*";
        }
        cout << endl; // move to next line after each row
    }
    return 0;
}