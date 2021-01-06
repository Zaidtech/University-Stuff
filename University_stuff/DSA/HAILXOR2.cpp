#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int T=0;
    cin >>T;
    while(T--){

        ll N=0;
        ll X=0;
        cin >>N;
        cin >>X;
        ll A[N];
        ll i=0;
        ll j=0;
        int p;

        for(ll i=0;i<N;i++)
            cin >> A[i];

        i = 0;
        j = 1;
        ll mini=0;
        
        while(X--){
                mini = min(A[i],A[j]);
                p = log2(mini);


                while( ( A[i] ^ int(pow(2,p) )) < A[i] &&  (A[i] ^ int(pow(2,p) ))!=0 && i < N)
                {
                    
                A[i] = A[i]^ int( pow(2,p) );

                }

                while( (A[j]^ int(pow(2,p)) ) < A[j] &&   A[i] ^ int(pow(2,p) )!=0 && j<N-1)
                {
                
                A[j] = A[j]^ int( pow(2,p)) ;
                }

                    i++;
                    j++;
        
        }
            for(i=0; i<N; i++)
                cout << A[i] << " ";
    }

}