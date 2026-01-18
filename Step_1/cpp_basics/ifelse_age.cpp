#include<bits/stdc++.h>
using namespace std;

//write a program that take age input from user and tells weather they re adult or not
// >== 18 , yes , adult
// <18, no, not an adult

int main(){
    int age ;
    cin >> age;

    if (age>=18){
        cout << "You're an adult";
    }

    else{
        cout << "You're not an adult";
    }
    return 0;
}

//else if (age<10){
        //cout << "You're not an adult";
    //}