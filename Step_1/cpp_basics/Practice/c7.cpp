#include <iostream>
using namespace std;

int main(){
    cout << "Enter the temperature in celcius: ";
    float t;
    cin >> t;

    float f = (t * 9/5) + 32;

    cout << "Temperature in Farenheit: " << f;

    return 0;
}