#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {2,2,3};
    int i=0;
    int j=1;
    int K=3;
    int p=0;
    while(K--){
        p = floor( min(log2(A[i]), log2(A[j]) ) ) ;
        while(A[i]!=0){
            A[i] = A[i] ^ int(pow(2,p));
            cout << "A[i] is changed to "<< A[i];
        }
        while(A[j]!=0){
            A[j] = A[j] ^ int(pow(2,p)); 
            cout << "A[j] changed to " << A[j] << endl;   
            }
            
        i++;
        j++;
        if(i>=3 || j>=3){
                break;
            }        
        }


    for(int i=0;i<2;i++)
        cout << A[i];
}

