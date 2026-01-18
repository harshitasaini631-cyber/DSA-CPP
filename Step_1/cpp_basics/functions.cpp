#include<bits/stdc++.h>
using namespace std;

//void - doesnt return anything.
/*void printName(){
    cout << "hey ";
}
int main() {
    printName(); 
    return 0;
}*/

//taking input
void printName(string name){
    cout << "hey " << name << endl;
}
int main() {
    string name; 
    cin >> name;
    printName(name);
   

    string name2;  //reusability of code
    cin >> name2;
    printName(name2);
    return 0;
}
    