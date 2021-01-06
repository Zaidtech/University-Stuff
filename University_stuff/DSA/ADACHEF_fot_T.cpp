#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    int N;
    cin >>T;
    while(T--){
    cin >>N;
    int C[N];
    for(int i=0;i<N;i++){ cin >> C[i];}
    // sort(C);
    int B1=0;
    int B2=0;
    int counter =0;
    N = N-1;
    cout << "N is : "<< N<< "\n";
    B1 = C[N--];
    B2 = C[N--];
        while((B1!=0 &&     B2!=0)){
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
}