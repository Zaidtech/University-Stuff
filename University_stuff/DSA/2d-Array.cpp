#include <bits/stdc++.h>
using namespace std;
int S[36];
int A[6][6];

void sum(int B[6][6], int S[16], int i, int j,int c){
     S[c] = B[i][j] + B[i][j-1] + B[i][j+1] +B[i+1][j] + B[i+2][j] + B[i+2][j-1] + B[i+2][j+1];
}

int main(){
    int c=-1;
//filling the array
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            cin >> A[i][j];
        }
    }

    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if(j-1>=1 && j+1 <=6 && i+2<=6){
                c++;
                sum(A,S,i,j,c);
            }
        }
    }

    // cout << *max_element(S,S+16);
    sort(S,S+16, greater<int>());
    cout <<S[0]<< endl;

}
