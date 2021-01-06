#include <iostream>
using namespace std;

int main(){
    int T = 0;
    cin >> T;
    for(int j =0; j<T;j++){
        int N = 0;
        int K = 0;
        int X = 0;
        int Y = 0;
        cin >> N;
        cin >> K;
        cin >> X;
        cin >> Y;
        int count = 0;
        
        for(int i = 0; i < 1000000;i++)
        {   
            if( ((X+K)% N) == Y || X ==N) 
             {
             cout << "YES"<<"\n";
             count  ++;
             break;
             }
            else {
                // cout << X << " ";
                X =  ((X +K) % N);
                }
            }
        if(count==0){
            cout << "NO"<< "\n";
        }
    }
}