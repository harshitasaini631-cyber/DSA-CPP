#include<bits/stdc++.h>
using namespace std;

/*
A. school has following grade system :
B. below 25 - F
C. 25-44 - E
D. 45-49 - D
E. 50-59 - C
F. 60-79 - B
G. 80-100 - A
ask uSer to eneter the marks and then print the corresponding grades
*/

/*int main(){
    int marks;
    cin >> marks;
    
    if(marks<25){
        cout << "F";
    }

    if (marks >= 25 && marks <=44){  //using && to satisfy both the conditions.
        cout << "E";
    }

    if (marks >= 45 && marks <=49){
        cout << "D";
    }

    if (marks >= 50 && marks <=59){
        cout << "C";
    }

    if (marks >= 60 && marks <=79){
        cout << "B";
    }

    if (marks >= 80 && marks <=100){
        cout << "A";
    }
    return 0;
}*/

//the above program isnt the best practice as it wil execute everythig and will take alot of time. o now will use the else if statemnt inw hich if the condition is satisfied then it will stop working and wont be executing the remaining ones which saves alot of time.

int main(){
    int marks;
    cin >> marks;
    
    if(marks<25){
        cout << "F";
    }

    else if( marks <=44){  //using && to satisfy both the conditions.
        cout << "E";
    }

    else if( marks <=49){
        cout << "D";
    }

    else if ( marks <=59){
        cout << "C";
    }

    else if ( marks <=79){
        cout << "B";
    }

    else if ( marks <=100){
        cout << "A";
    }
    return 0;
}