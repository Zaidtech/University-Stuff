#include <bits/stdc++.h>
using namespace std;

int sum =0;
int p=0;
int c = 0;
int n =0;

int Power_sum(int k){
    if(k==1) return c++;
    if(pow(k,p) == n)
    {
        c++;
        Power_sum(k-1);
    } 
    sum =+pow(k,p);
    if(sum == n) {
        c++;
        Power_sum(k-1);

    }
    cout << "\n";
    cout << k ;
    Power_sum(k-1);

}
int main(){
    cin >>n;
    cin >>p;
    int k = pow(n,1.0/p);
    // cout << k << "\n";
    cout << Power_sum(k) << "\n";
}
