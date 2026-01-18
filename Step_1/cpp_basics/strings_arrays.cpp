#include<bits/stdc++.h>
using namespace std;

int main() {
    string s ="string";
    cout << s[0] << endl; // accessing first character
    int len =s.size();   // size of the string
    cout << len << endl;
    cout << s[len - 1] << endl; // last character
    s[len - 1] = 'z'; // changing the last element to z
    cout << s << endl; // print updated string
    return 0;
}