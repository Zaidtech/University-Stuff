#include <bits/stdc++.h>
using namespace std;

int main() {
	int T=0;
	cin >>T;
	while(T--){
	    long long N=0;
        cin >>N;
	    int no_of_1s=0;
	    int no_of_0s=0;
	    int no_of1p=0;
	    int no_of0p=0;
	    int pos_1s[N] = {0};
	    int pos_1p[N] = {0};
	    char S[N];
	    char P[N];
	    
	    for(int i=0;i<N;i++){
	        cin >>S[i]; //it will be 0 or 1
	        if(S[i]=='1')
	            {
	                pos_1s[no_of_1s]= i;
	                no_of_1s++;
	            }  
	    }x

// printing the index aaray
            // for(int j=0;j<no_of_1s;j++)
            //     cout << pos_1s[j]<< " ";

            //     cout << "\n";
// -------------------------------------
	    for(int i=0;i<N;i++)
	    {
	        cin >>P[i];
	        if(P[i]=='1')
	            {
	                pos_1p[no_of1p]=i;
	                no_of1p++;   
	            }
	       }

// printing the positions of 1
//             cout << "\n";
// 	        for(int j=0;j<no_of1p;j++)
//                 cout << pos_1p[j]<< " ";

//                 cout << "\n";
// // --------------------------------------------
        bool match=true;
        for(int k=0;k<N;k++)
        {
            if(S[k]!=P[k])
                {
                    match =false;
                    break;
                }
        }

        // cout << "No  of ones are "<< no_of1p <<" :" << no_of_1s << endl;
        if(match){
            cout << "Yes"<<endl;
            continue;
        }

        // cout << "\n";
        if(no_of1p==no_of_1s){
	       // proceeed
           bool flag=false;
           for(int k=0;k<no_of_1s;k++){
                if(pos_1p[k]<pos_1s[k])
                  {
                        // cout <<"Comparing the no "<< pos_1p[k] << "& " << pos_1s[k]<<endl; 
                      flag= false;
                      break;
                  }
                else
                    flag = true;
           }

           if(flag)
           { 
               cout << "Yes"<<endl;
                continue;
           }
           else{
               cout << "No" <<endl;
               continue;
           }
	    }
        else{
            cout << "No"<<endl;
        }
	}
    
}
