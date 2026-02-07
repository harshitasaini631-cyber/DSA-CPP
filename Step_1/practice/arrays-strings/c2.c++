#include <iostream>
using namespace std;

int main(){
    int arr[5], max;  //mx -> a variabe to store largest number

    for (int i =0; i <5 ; i++)
        cin >> arr[i];

    max = arr[0];  // assuming first element is the largest. max = 5 because we need s atsrting value to compare others with
    for (int i=1; i<5; i++)     
         if (arr[i]>max)
            max = arr[i];

    cout << "Largest = " << max;
    return 0 ;       
}

/*
arr = [1,2,3,4,5]
so max = 1 at first to compare. arr[0]=1*/ 