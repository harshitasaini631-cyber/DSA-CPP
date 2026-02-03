#include <iostream>
using namespace std;

int maximum(int a, int b){
    return (a>b) ? a:b;
    //?: (ternary operator) -> condition? value_if_true:value_if_false
    /*if (a > b)
    return a;
else
    return b; same logic written in one line*/
}    

int main(){
    cout << maximum(10,20);
    return 0;

}    

