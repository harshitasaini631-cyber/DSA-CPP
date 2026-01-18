#include<bits/stdc++.h>
using namespace std;


//pass by value
void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main(){
    int num;
    cin >> num;
    doSomething(num); 
    //cout << num << endl; 
    return 0;
}

 //when u pass a value in the function. 10 , it goes as a copy and not the original number thats why when we write next line , it prints 10 or the given number as the original number is still there.
   
//if we run this then it will give the value given by user . the original number did not go. it send the copy to the fn.



//can work as a string as well

void doSomething(string s){
    s[0] = 't';
    cout << s << endl ;
}
int main(){
    string s = "raj";
    doSomething(s); 
    cout << s << endl; 
    return 0;
}
