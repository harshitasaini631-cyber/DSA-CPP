#include<bits/stdc++.h>
using namespace std;

//basic fn for sum
/*int main() {
    int num1,num2;
    cin >> num1 >> num2;
    int num3 = num1 +num2;
    cout << num3;

    return 0;
}*/

//better way to write a fn for addition
int sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3;

}

int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res;
    return 0; 
}
