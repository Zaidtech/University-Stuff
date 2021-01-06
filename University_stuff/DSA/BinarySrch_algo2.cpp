#include <iostream>
using namespace std;
#include <time.h>

int main(){
    int Array[1000000];
    srand( (unsigned) time(0));
    Array[0] =  (rand()*1000) ;
    for (int i = 1; i<100000; i++){
        // srand((unsigned) time(0));
        Array[i] = (rand() % 1000);
        cout << Array[i]<< "\n";
        }
    


int k = 0;
for(int b = n/2; b>=1;b/=2){
    while(k+b < n && array[k+b] <=x ){
        k += b;
    }
    if(array[k] == x){
        cout << "Found at index "<< k;
    }
}


}
