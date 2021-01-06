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
        int i=0;
        int j=1;
        int p;

        for(ll i=0;i<N;i++)
            cin >> A[i];
        i = 0;
        j = 1;

        while(X--){
            while(i<N-1&&j<N)
            {
            //   cout << "\n";   
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
            }
                
        }       
            for(ll i=0; i<N; i++)
                cout << A[i] << " ";
    }

}