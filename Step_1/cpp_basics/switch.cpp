#include<bits/stdc++.h>
using namespace std;

/*
Take the day no and print the correspinding day
for 1 print monday., for 2 tueaday and so on till 7 sunday
*/

int main() {
    int day;
    cin >> day;

    switch (day){
        case 1:
        cout << "Monday";
        break;
        
        case 2:
        cout << "Tuesday";
        break;

        case 3:
        cout << "Wednesday";
        break;

        case 4:
        cout << "Thursday";
        break;

        case 5:
        cout << "Friday";
        break;

        case 6:
        cout << "Saturday";
        break;

        case 7:
        cout << "Sunday";
        break;

        default : //if number isnt b/w 1-7
        cout << "Invalid";

    }
    
    return 0;
}