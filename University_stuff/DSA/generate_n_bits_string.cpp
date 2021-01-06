#include <iostream>
using namespace std;

int A[100];

void Binary(int n, int k){

   if(n < 1){
      for(int i =0 ; i < k; i++)
      printf("%d",A[i]);
      }
      else{
         A[n-1] = 0;
         Binary(n-1, k);
         cout << "\n";
         A[n-1] = 1;
         Binary(n-1, k);
      
      }
   
}

int main(){
   int n =0;
   cin >> n;
   int k = 0;
   k = n;
   Binary(n, k);
}
