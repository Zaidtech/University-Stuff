#include <iostream>
using namespace std;

int main(){
int best = 0;
int Array[] = {-1,-3,-4,4,5,6,-9, 3,45,-9,3894,9000,-9,-23,-90,23,-1,2,-2};

for(int i=0; i<19;i++){
    int sum = 0;
    
    for(int j=i; j<19;j++){
        sum += Array[j];
        best= max(sum, best);
    }
     
   }
    cout << best <<"\n";
}

