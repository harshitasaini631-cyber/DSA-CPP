#include <iostream>
using namespace std;

//using function to print pattern. taking user input.
void print(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print(n);
}