#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int long T=0;
    int long N = 0;
    cin >> T;
    while(T){
        cin >> N;
        int short A[N][N] = {0};
        for(int i = 0;i<N;i++){
            for(int j=0;j<N;j++){
                cin >> A[i][j]; 
            }
        }
        int long k=0;                
        int long trans=0;
        if(A[0][1]!=2){
            k=1;
        }
        else {
            k=0;
        }
        for(int i=0;i<N;i++)
        {     
         if ( (A[0][i]) != i+1 && k==0) { // if the element out of order is in pos (j,1) ie at the column 1 and not (i,j)
            trans = trans+1;
            k=1;
            }
        else    

            if(A[0][i]== i+1 && k==1){
            trans = trans+1;
            k=0;
         }
        }
        cout <<trans<<endl;
        T --;   
    }

}
