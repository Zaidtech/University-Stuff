#include <iostream>
using namespace std;

int main(){
    int N=0;
    cin >> N;
    double A[N]= {0};
    int G[N] = {0};
    for(int i=0;i<N;i++) cin >> A[i];
            // logic here
            for(int i=0;i<N-1;i++){
                // G[i]=1;
                for(int j=i+1;j<N;j++){
                    if( abs(A[i]-A[j])<=1.0){
                        A[j] = 100000;
                        G[i]++;
                        
                    }
                }
            }
            int i=0;
            while(G[i]!=0){
                cout << G[i++] << " ";
            }
}