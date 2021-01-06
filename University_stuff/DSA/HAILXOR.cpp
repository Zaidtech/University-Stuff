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
            if(A[i]!=0 || A[j]!=0)
               {
                    p = floor( min(log2(A[i]), log2(A[j]) ) ) ;
                    cout << "P calculated to be " << p << endl;
                    A[i] = A[i] ^ int(pow(2,p));
                    // cout << "A[i] updated to "<< A[i];
                    A[j] = A[j] ^ int(pow(2,p));
                    // cout << "A[j] updated to " << A[j];
                    for(ll i=0; i<N; i++)
                        cout << A[i] << " ";
               }
               else{
                   break;
               }
               i++;
               j++;
            }    
        }       
        // //     for(ll i=0; i<N; i++)
        // //         cout << A[i] << " ";
    }

}