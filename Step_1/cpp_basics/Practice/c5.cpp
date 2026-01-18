#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a 3-digit number: ";
    cin >> n;

    int last = n%10;
    n = n/10;
    int middle = n%10;
    n = n/10;
    int first = n%10;
    
    int sum = last + middle + first;

    cout << "The sum of digits: " << sum;
    return 0;
}