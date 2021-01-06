#include <iostream>
using namespace std;
#include <stdio.h>

int main() {

    int T=0;
    scanf("%d", &T);
    
    while(T--){
        int N=0;
        scanf("%d", &N);
        int S[N];
        int max_speed = 0;
        for(int i=0;i<N;i++){
            scanf("%d", &S[i]);
        }
        
        for(int i=0; i<N-1;i++){
            if((S[i+1] - S[i]) <= -1){
                max_speed++;
            }
        }
        
        cout << max_speed+1 <<endl;
        
    }
    
    
}
