#include <bits/stdc++.h>
using namespace std;



int isSorted(int A[], int n){
    if(n==1) return 0;
    return ( A[n-1] < A[n-2] ? 0:isSorted(A, n-1));
}

int main(){
    int A[10]  = {3,1,5,2,7,3,8,6,79,12};
    isSorted(A, 10);

}

