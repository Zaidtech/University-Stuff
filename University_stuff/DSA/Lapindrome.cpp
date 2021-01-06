// To check if the string is a Lapindrome ie of the type ga | ga
//  ro |t| or
//  __     __

#include <iostream>
#include <string>
using namespace std;

int main(){
    int T=0;
    cin >> T;
    string words[T];
    // Getting inputs...
    for(int i=0; i<T; i++){
        cin >> words[i];
    }
    for (int i=0;i<T;i++){
        int sum = 0;
        int k=0;
        int l=0;
        int sum1 = 0 ;
        int sum2 = 0;    
        for(int j=0; j<words[i].length(); j++)
        {
            int Array1[5000];
            int Array2[5001];

            if(j< words[i].length()/2)
            {
                Array1[k] = int(words[i][j]);
                sum1 = sum1 + Array1[k];
                k++;
            }
            else if(j >=words[i].length()/2)
            {   
                if (words[i].length() %2 ==0)
                {   
                    Array2[l] = int(words[i][j]);
                }
                else
                    Array2[l] = int(words[i][j+1]);
                    // cout << words[i][j+1];
                }
                sum2 = sum2 + Array2[l];
            l++;                                
            }

        sum = sum1 - sum2;
        if (sum ==0) {
            cout << "Yes \n";
        }
        else {
        cout << "No \n";
        }
    }
}

