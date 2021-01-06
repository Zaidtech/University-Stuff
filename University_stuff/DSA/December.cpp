#include <iostream>
using namespace std;

int main(){
    int T=0;
    cin >>T;
    // cout << "Enter no of test cases are "<< T<< " \n";
    while(T--)
    {
            
        int N=0;
        int K=0;
        int p_count=0;
        int n_count=0;
        cin >>N>>K;
        int A[N] = {0};
        int i=0;
        while(true)
        {

                if(n_count < N-K){
                // cout << "Placing a negative sign in front of "<< i;
                n_count++;
                A[i] = -(i+1);
                // cout << i << " ";
                i++;

                // cout << i << " <--This is i";
                }
    
                if(p_count < K){
                    p_count++;
                    // cout << "Placing a + sign in front of "<< i;
                    A[i]= i+1;
                    i++;
                    // cout << i << " <--- this is i";
                } 

                if(n_count==N-K && p_count==K)
                    goto start;
        }

            start:
            // cout << " \n";
            for(int i=0;i<N;i++)
                cout << A[i] << " ";  
            
    }    
    
    
}

