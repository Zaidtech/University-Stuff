#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int long T=0;
    cin >> T;
    while(T--){
        int long long N = 0;
        cin >> N;
        int long zeros =0;
        int long long quotient =0;
        int long long remainder =0;
        for(int i =1; i<N;i++){
                quotient = (pow(5,i));
                remainder = N / quotient;
                if(remainder < 1){
                    break;
                }
                else{
                    zeros += remainder;
                }

        }
        cout << zeros<< "\n";
    }
}