#include<bits/stdc++.h>
using namespace std;

// when u dont want to pass the copy to the fn like in pass by value but want to do chnages in original value. then we use pass by refrence. attach & to it. it takes original and sends it

void doSomething(string &s){
    s[0] = 't';
    cout << s << endl ;
}
int main(){
    string s = "raj";
    doSomething(s); 
    cout << s << endl; 
    return 0;
}

//the original value is passed

/*void doSomething(int &num){
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
}*/
