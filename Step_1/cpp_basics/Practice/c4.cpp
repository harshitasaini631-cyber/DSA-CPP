#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter your marks to calculate percentage" << endl;

    double mark1;
    cout <<"Enter your marks for english: ";
    cin >> mark1;

    double mark2;
    cout <<"Enter your marks for maths: ";
    cin >> mark2;

    double mark3;
    cout <<"Enter your marks for Hindi: ";
    cin >> mark3;

    double mark4;
    cout <<"Enter your marks for SST: ";
    cin >> mark4;

    double mark5;
    cout <<"Enter your marks for Science: ";
    cin >> mark5;

    double percentage = (mark1+mark2+mark3+mark4+mark5)/500 * 100;

    cout << "Total percentage: " << percentage;

    return 0;
}