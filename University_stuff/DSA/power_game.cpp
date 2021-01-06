#include <bits/stdc++.h>
using namespace std;

int main(){
    int long long T =0;
    unsigned int long long k=0;
    int  d0 = 0;
    int  d1 = 0;
    cin >> T;
    while(T--){
        cin >> k;
        cin >>d0;
        cin >>d1;
        int sum = 0;
        sum +=d0 + d1;
        int long long A[k] = {0};
        A[0] = d0;
        A[1] = d1;
        for(int long long i =2 ; i<k;i++){
            A[i] = sum % 10;
            // cout << i<< "\n";
            sum += A[i] %10;
            cout << sum<<"\n";
            
        }
        if(sum %3 == 0) cout << "YES \n";
        else cout << "NO \n";
    }
}