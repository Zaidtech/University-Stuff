#include <iostream>
using namespace std;

int main(){
    int N =0;
    N = 2;
    int C[3] = {1,1,1};
    int B1=0;
    int B2=0;
    int counter=0;
        B1 = C[N--];
        B2 = C[N--];
        while((B1!=0&&B2!=0)){
            B1--;
            B2--;
            counter++;
            if(B1!=0 &&B2==0&&N<0) {counter = B1; cout << "Case of only B1 remaining"<<"\n";}
            if(B2!=0 && B1==0&&N<0) {counter = B2; cout << "Case of only B2 remainig"<<"\n";}
            if(B1==0 && B2==0 && N>0){ B1=C[N--]; B2=C[N--];}
            if(B1==0)  { B1=C[N--];  continue;}
            if(B2==0){  B2=C[N--];  continue;}
            else if (N==0) {
                    B1=C[N--];
            }
        }
        cout << counter <<"\n";
    }