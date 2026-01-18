#include <iostream>
using namespace std;

int main(){
    cout << "Enter the seconds: ";
    int s;
    cin >> s;

    int hours = s / 3600;
    int remaining = s % 3600;
    int minutes = remaining / 60;
    int seconds = remaining % 60;

    cout << hours << " hr " << minutes << " min " << seconds << "s";

    return 0;


}