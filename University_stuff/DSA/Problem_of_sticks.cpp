#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display(int n){
    cout <<n<<"\n";
}

int main(){
    int T=0;
    cin >> T;
    int long N = 0;
    string answ="";
    int ans = 0;

    while(T--){
         cin >> N;
         ans = 0;
         set <long long int> s; //long long
        int Ans[N] = {0};
        int long long A[N];   
        for(int long i=0;i<N;i++){
            cin >> A[i];
            if(A[i]!=0) 
                s.insert(A[i]);
        }
            display(s.size());  
    }
}

    
    