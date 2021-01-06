#include <stdio.h>
using namespace std;
int main() {

    int T =0 ;
    cin >> T;
    while(T--){
        cout << "TEst case no "<< T<< endl;
        int n =0;
        int k = 0;
        cin >> n;
        cin >> k;
        int Q[n];
        int day = 1;

        for(int i =0; i<n; i++){
            cin >> Q[i];
        }
        for(int i =0; i<n; i++){
            cin >> Q[i];
            solve(Q[i],r,k);
        }
         
    }
}

int solve(int no, int r, int k){

    no = no +r;
    if(no < k){
        break;
    }
    r = no -k;
    solve(no,r,k);
}