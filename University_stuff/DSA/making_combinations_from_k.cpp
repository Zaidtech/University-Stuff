#include <bits/stdc++.h>
using namespace std;

int A[1000];
int X =0;
int p = 0;
int  k =0;
int counter = 0;
int Combinations(int n){
    if(n<1){
        int sum = 0;
        for(int i=0;i< pow(X, 1.0/p);i++){
            printf("%d", A[i]);
            sum =+ pow(A[i], p);
        }
           if(sum == X)  
            counter ++;
    }
    else{
        for(int i=0; i < pow(X, (1.0/p));i++){
           A[n-1] = i;
           Combinations(n-1);
           printf("\n");
        }
    }
    return counter;
}

int main(){

    cout << "Enter the no: ";
    cin >> X;
    cout << "Enter the power  :";
    cin >> p;
    int n = 0;
    n= X;
    // Combinations(n);
    cout << "No of time it is " << X << " is : \n" << Combinations(n);
}