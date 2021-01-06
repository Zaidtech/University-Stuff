#include <iostream>
using namespace std;

int main(){

int sum = 0;
int best = 0;
int Array[] = {-1,-3,-4,4,5,6,-9, 3};
for (int i = 0; i < 8;i++){
    sum = max(Array[i], Array[i]+ sum);
    best = max(sum , best);
}
cout << best;
}

