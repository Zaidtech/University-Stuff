#include <bits/stdc++.h>
using namespace std;

int main() {
	int T=0;
	cin >>T;
	while(T--){
	    int N=0;
	    int K=0;
	    cin >>N;
	    cin >>K;
	    int attempts=0;
	    long long A[N] = {0};
	    long long sum=0;
	    for(int i=0;i<N;i++)
	       {
	           cin >> A[i];
	            sum+=A[i];
	       }
	       if(sum%K==0){
	           cout << attempts;
	       }
	       else{
	           attempts=1;
	           cout << attempts;
	       }
	}
}
