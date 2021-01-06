#include <bits/stdc++.h>

using namespace std;

int main(){
    int i =0;
    int N = 90;
    bool value = false;
    
    for(int i =1; i <=90; i++){
        
        if(i==3){
            cout << 1 << " ";
        }
        else if(ceil(log2(i)) == floor(log2(i))){
            cout << i+1<< " ";
            value = true;
            continue;
        }
        else if(value == true){
            cout << i-1<<" ";
            value  = false;
        }
        else{
            cout << i << " ";
        }

    }
}