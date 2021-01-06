#include <iostream>
using namespace std;

int main() {
    int T =0 ;
    cin >> T;
    while(T--){
        // cout << "TEst case no "<< T<< endl;
        int long n =0;
        int long long k = 0;
        cin >> n;
        cin >> k;
        int long long Q[n];
        int day = 1;
        int long long extra_day=0;
        for(int i =0; i<n; i++){
            cin >> Q[i];
        }

        if(n ==1 ){
            cout << ((Q[0] / k )+ 1)<< endl;
            continue;
        }

        if(Q[0] <k){
            cout << 1<<endl;
            continue;
        } 
        // -------------
        int long long left_q = 0;
        int i =0;
        for(i = 1; i <n ; i++){
            day ++;
            left_q = Q[i-1] - k;
            // cout << "Q[i] IS "<< Q[i]<<endl;
            if(left_q < 0){
               cout << day << endl;
                break;
            }
            else if(left_q + Q[i] < k){
                cout << day<< endl;
                break;
            }
            // AN important case
            else if(left_q + Q[i] == k){
                // day ++;
                // break;
                if(i == n-1) {
                    day++;
                    cout << day;
                }
                continue;
            }
            else{
                Q[i] = Q[i] + left_q;
                // cout << "Q[i] IS NOW "<< Q[i]<<endl;
            }
        }
        
        // cout << "thid did shit"<<Q[n-1] << endl;
        if(Q[n-1] > k){
            extra_day = Q[i-1] / k;
            cout << day+extra_day<< endl;
        }
    }
}
            
            
 