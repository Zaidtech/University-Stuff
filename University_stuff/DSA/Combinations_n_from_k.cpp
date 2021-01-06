#include <iostream>
using namespace std;

int A[3];

void k_string(int n ,int k){

    if(n < 1){
        for(int i=0;i<3;i++)
        printf("%d", A[i]);
    }
    else{
        printf("\n");

        for(int i = 0; i<k;i++){
            A[n-1] = i;
            printf("\n");
            k_string(n-1, k);
        }
    }
}

int main()
{
    k_string(3,7);
}
