#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int T = 0;
    int N =0;
    // cout << "Enter the no of cases :";
    cin >> T;
    while(T--){
        // cout << "Enter the no of players : ";
        cin >> N;
        int V[N];
        int slowest =0;
        int fastest = 0;
        int pos_slowest =0;
        int pos_fastest =0;
        int max_infec = 1;
        int min_infec = N;
        int temp_pos = 0;
        int no_of_fastest =0;
        int no_of_slowest =0;
        set <int >s;
            slowest = 5;
            fastest = 0;
        for(int i =0; i<N;i++){
            //  To find smallest and largest element in array with position
            cin >> V[i];
            // cout <<"Enteres no is"<< V[N]<< "\n";
            s.insert(V[i]);
            if(V[i] < slowest && V[i] !=0)
            {   
                    slowest = V[i];
                    pos_slowest = i;
                    continue;       
            }
            if(V[i]>fastest){
                // cout << "Reached here"; 
                fastest = V[i];
                pos_fastest =i;
                // cout << fastest;
                continue;
            }
            // if(V[i] == fastest) {
            //     // cout <<"Duplicate foud \n";
            //     // no_of_fastest += 1;
            //     pos_fastest++;
            // }
            // if(V[i] == slowest ) {
            //     // cout << "dublicate found \n";
            //     // no_of_slowest+=1;
            //     pos_slowest++;
            // }
            else if(V[i]==0)
                {   
                    // cout << "A 0 diz is distinguished";
                    slowest = 0;
                    pos_slowest = i;
                }
        }
        // cout << "Slowest is "<< slowest<< " at pos " << pos_slowest << "\n";
        // cout << "Fastest is "<<fastest<<" at pos "<< pos_fastest<< "\n";
        // cout << "Size of set is "<<s.size()<<"\n";
        // cout << "Input N is "<< N<< "\n";
        // cout << "No of fastest"<< no_of_fastest+1<< "\n";
        // cout << "No of slowest"<< no_of_slowest+1<< "\n";

        // Cases1 ALl elements diff
        if(s.size() == N){
            //   IF SIZE == N IE NO REPETETION
            if(pos_slowest ==0){
            min_infec = 1;
            // cout << "1\n";
            }
            if(pos_slowest == N-1){
                max_infec = N;
                // cout << "2\n";
            }
            if(pos_slowest < N-1 && pos_slowest !=0){
                max_infec = pos_slowest+1;
                // cout << "3\n";
            }
            if(pos_fastest == N-1 ){
                min_infec = 1;
                // cout << "4\n";
            }
            if(pos_fastest < N-1 && pos_fastest!=0 ){
                max_infec = N-pos_fastest; 
                // cout << "5\n"; // to be looked
            }
            if(pos_fastest ==0){
                max_infec = N;
                // cout << "6 \n";
            }
        }
        else if(s.size() ==1 && s.size()!=N){
            max_infec = 1;
            min_infec = 1;
            }

        else if(s.size() == N-1){
            //  This is the case where two are having same speed...
            // cout << "Case of repetetion of Diz..";
            
            if(pos_slowest==0){
                // cout <<"REAched here \n";
                min_infec = 1;
                max_infec = 1;
            }
            if(pos_slowest>0 && pos_slowest<N-1){
                // cout << "Here?? \n";
                max_infec = N-2;
                min_infec = 1;
            }
            if(pos_slowest== N-1){
                max_infec = N;
            }

            if(pos_fastest==N-1){
                max_infec = 1;
                min_infec =1;
            }
            if(pos_fastest ==0){
                // cout << "Fast at 0\n";
                max_infec = N-1;

            }
            if(pos_fastest < N-1){
                // cout << "HEre did it \n";
                max_infec = N- pos_fastest;
            }
                // else min_infec = 1;
            }
        
            if(min_infec <= max_infec)
            cout << min_infec<<" "<< max_infec<<endl;
            else
            {
                cout <<max_infec<< " "<<min_infec<<endl;
            }
    }
            
        
}