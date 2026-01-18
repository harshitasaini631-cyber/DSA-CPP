#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int maximum = max(a, max(b, c));
    cout << maximum;
    return 0;
}