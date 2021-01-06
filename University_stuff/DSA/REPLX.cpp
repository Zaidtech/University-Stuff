#include <iostream>
#include <stdio.h>
using namespace std;

void replace(int long[],int);
void merge_sort(int long[], int);
void merge(int long L[], int sizeL , int long  R[], int sizeR, int long A[]);
void Print(int long[], int);
// T
//  N X P K
// a1 a2 ....an
int main(){
    int T =0;
    cin >> T;
    while(T--){
        // cout << "IN test case "<< T<< "\n";
        int N =0;
        int X =0;
        int p=0;
        int K =0;
        cin >> N;
        cin >> X;
        cin >> p;
        cin >> K;
        int long A[N];
        int opt =0;
        for(int i=0;i<N;i++){
            cin >> A[i];
        }
        // a0, a1, a2, a3...
    while(true){
        merge_sort(A, N);
        cout << "printing sorted array";
        Print(A,N);
        printf("\n");
        //  this is the case where the replace is done at the same pos where X is to be found.. or after sorting already found a value
        if(A[p-1] == X){
            cout <<1<<"\n"; 
            break;
        }
        else if(p == k){
            cout << 1 << "\n";
        }
        // [20,21,35] if p ==3  never possible
        else if(p-1==N-1 && A[p-1] > X){
            // cout  << "H";
            cout <<-1<<"\n";
            break;
        }
        // [20,21,22,24] if X =25 and p =3 then either 20 0r 21 ,22 can be replaced by 25 in one step
        else if(p-1==N-1 && A[p-1] < X){
            cout <<1<<"\n";
            break;
        }
        else if(A[p] < X){
            // cout << "i";
            cout <<-1<<"\n";
            break;
        }
        else if(p < k && A[k] )
        // else if(A[K-1] == 0){
        //     // cout << "j";
        //     cout <<-1<<"\n";
        //     break;
        // }
        else{
        replace(A,K);
        opt++;
        }
    }
    }
}






void replace(int long A[], int k){
    // cout << A[k-1]<< "--> changed to " ;
    A[k-1] = 0;
    // cout << A[k-1]<< "\n";
    // cout <<"\n";
}

void merge_sort(int long A[],int num){
    int n =0;
    n = num;
    int mid =0;
    if(n%2==0){
        mid = n/2;
    }
    else{
        mid = n/2 +1;
    }
    int long Left[n/2];
    int long Right[n-mid];

    if(n <2){
    //  printf("RECHECD END OF THIS CALL");
     return;
    }    
    // Filling the Left and the right arrays..

    for(int i=0;i<mid;i++){
        // printf("Filling left array \n");
        Left[i] = A[i];
    }
    
    for(int i=mid ;i< n;i++){
        Right[i-mid] = A[i];
    }
    merge_sort(Left, mid);   
    merge_sort(Right, n-mid);
    merge(Left, mid, Right, n-mid, A);
}

void merge(int long L[], int  sizeL , int long R[], int sizeR, int long A[]){

    int nL = sizeL;
    // int L[nL];
    int nR = sizeR;
    // int R[nR];
    int i = 0;
    int j=0; 
    int k=0;
    int u =0;
    while(i <nL && j<nR){
        if( L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
        while(i < nL){
            A[k] = L[i];
            k++;
            i++;
        }
        while(j<nR){
            A[k] = R[j];
            j++;
            k++;
        }
}

void Print(int long A[], int N){
     for(int i=0; i<N;i++){
        printf("%ld ", A[i]);
    }
}