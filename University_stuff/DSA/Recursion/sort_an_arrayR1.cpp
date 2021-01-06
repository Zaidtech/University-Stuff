#include <iostream>
using namespace std;

void sort(int a[], int n){
    int temp_var = 0;
    // base condition
    if(n==1){
        return;
    }
    temp_var = a[n-1];  
    // indecution step  
    for(int i = 0 ; i<n;i++) 
    {
        if(a[i]> temp_var) {

            a[i+1] = temp_var;   
            a[n-1]  = a[i];
            a[i] = temp_var;
            }
    }
    // hypothesis
    sort(a, n-1);
}c

int main(){

    int  a[] = {1,3,7,8,9,6};
    int n = 0;
    n = sizeof(a);
    sort(a ,n);
    for(int i=0;i<n;i++){
        cout << a[i] << ", ";
    }
}