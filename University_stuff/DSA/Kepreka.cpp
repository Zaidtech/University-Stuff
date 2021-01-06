#include <bits/stdc++.h>
using namespace std;

void recv(int number){
    int remainder=0;
    while(number!=0){
        number  = number/10;
        remainder = number%10;
    }
}

int main(){
    srand(time(0));
    while(true){

    int number = rand()%100000;
    cout << "Randomly generated no is : "<< number;
    rev(number);

    }
    
}