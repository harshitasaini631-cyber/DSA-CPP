#include<bits/stdc++.h>
using namespace std;

//instead of putting values in array one by one we can use for loop

//arrays are genrally passed by reference. always go with refernce
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "value inside function:" << arr[0] << endl;

}

int main(){
    int n = 5;
    int arr[n];
    for(int i = 0; i<=n-1; i = i+1){ //i < n
        //cout << i << endl;
        cin >> arr[i];
    }

     doSomething(arr, n);

     cout << "value inside int main:" << arr[0] << endl;

    return 0;
}