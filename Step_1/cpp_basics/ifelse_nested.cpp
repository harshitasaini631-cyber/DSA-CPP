#include<bits/stdc++.h>
using namespace std;

/*take age as an unput from user and decide accordingly if they re eleogible for job or not*/

int main(){
    int age;
    cin >> age;
    if(age < 18) {
        cout << "not eligible for job";
    }
    //age >= 18

    else if(age <= 57){    //nested if
        cout << "eleigible for job";
        if(age >= 55){
            cout << "but retirement soon";
        }
    }
    else{
        cout << "retirement time";
    }
    return 0;
}