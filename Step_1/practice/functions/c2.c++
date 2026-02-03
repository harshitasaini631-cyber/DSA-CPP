#include <iostream>
using namespace std;

bool isPrime(int n){  //a fn that takes an integer n and return true or false to check if n is prime or not.
    if(n<=1) return false; //to check invalid numbers(-1,0,1) and return false

    for (int i=2; i<n; i++) // start checking divisibility from 2 till n-2 and divide n by every number
        if(n%i==0) //if remainder is 0 , then number is divisible , not prime
           return false;

    return true;       // if no divisor find then return true so n is prime.
}


int main(){
    int n;
    cin >> n;

    if(isPrime(n))   
       cout << "Prime";
    else
        cout << "Not Prime";
        
    return 0;    
}

/*isPrime(7)

Loop checks: 2, 3, 4, 5, 6

None divide 7

Returns true

Output: Prime*/ 