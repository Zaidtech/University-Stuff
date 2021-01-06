#include <iostream>

using namespace std;

void Print(int n){ // it was the design of the hyposthesis... 
    //  base condition 
    if(n==1){
        cout << 1<< " ";
        return;
    }
    // hypos
    Print(n-1);  // by the similiar hypos it will be bringing 1 2 ....n-1  ie. n left..
    // induction completes the 
    cout << n<< " ";
}

int main(){
    Print(10);
}