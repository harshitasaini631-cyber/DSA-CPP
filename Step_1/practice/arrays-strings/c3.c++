#include <iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter the string :";
    cin >> s;

    int count = 0; //to store the len of the string , starts from 0
    for (char c : s) //for each character  c in the string s , count. : = "from" or "inside"
        count++;

    cout << "Length : " << count;
    return 0;    
}