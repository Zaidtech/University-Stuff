#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int K=0;
    int T=0;
    int N=0;
    scanf("%d",&K);
    scanf("%d",&T);
    while(T--){
        scanf("%d", &N);
        string str ;
            if(N%2 ==0){
                printf("0\n");
                for(int i=N/2; i>0; i--){
                    if(i%2 ==0){
                        printf("1");
                        str ="1"+str;
                    }
                    else {
                        printf("0");
                        str = "0"+str;
                    }
                }
                cout << (str)<<endl;
                continue;
            }
            else 
            {
                if(N==3){
                    printf("0\n 001\n");
                }
                else{
                printf("1\n");
                for(int i=1; i<=(N-1)/2 ; i++){
                    if(i %2 ==0){
                        printf("1");
                        str = "1"+str;
                    }
                    else{
                        printf("0");
                        str = "0" +str;
                    }
                }
                cout << (str)<<endl;
                }
            }
    }
}
