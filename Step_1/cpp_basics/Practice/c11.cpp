#include <iostream>
using namespace std;

int main(){
    cout << "Enter your marks: ";
    int num;
    cin >> num;

    if (num > 90){
        cout << "A";
    }

    if (num <= 90){
        cout << "B";
    }

    if (num <= 80){
        cout << "C";
    }
    if (num <= 60){
        cout << "D";
    }

    
    return 0 ;

}