#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int T=0;
    cin >>T;
    while(T--){

        ll N=0;
        ll n=0;
        ll X=0;
        cin >>N;
        n=N;
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

        while(N--){
                
                p = log2(A[i]);
                
                if( A[i] ^ int(pow(2,p) ) !=0)
                {
                    A[i] = A[i]^ int( pow(2,p) );
                    i++;
                }
                
                while( (A[j]^ int(pow(2,p)) ) !=0)
                {
                    
                    A[j] = A[j]^ int( pow(2,p)) ;
                    j++;
                }
                
                if(A[i]==0 && i<N-1)
                    i++;
                
                if(A[j]==0 && j<N)
                    j++;
                
                X--;
        }

        while(X>=0){
            p = log2(A[i]);
            A[i] = A[i]^ int(pow(2,p));
            A[j] = A[j]^int(pow(2,p));
            X--;
            // cout << "Executing this";
        }
    
            for(i=0; i<n; i++)
                cout << A[i]<<" ";
    }

}