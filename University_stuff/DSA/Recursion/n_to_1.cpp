#include <iostream>

using namespace std;

void Print(int n)   // n n-1 n-1  . . 3 2 1
{
    if(n==1){
        cout << 1 ;
        return;

    }
    cout <<n << " ";
    Print(n-1); // n-1 n-2 ... 3 2 1
}

int main(){
    Print(10);
}