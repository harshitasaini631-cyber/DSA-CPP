#include <iostream>
using namespace std;

int main(){
    for(int i=1; i <= 3; i++){
        for(int j=1; j <= i; j++)
            cout << j;
            //cout << "*"
        cout << endl;    
    }
    return 0;    
}


/*
i = 1
inner loop: j = 1 to j <= 1
1

i = 2
inner loop : j =1 to j <=2
1,2

i = 3
inner loop : j = 1 to j <= 3
1,2,3*/