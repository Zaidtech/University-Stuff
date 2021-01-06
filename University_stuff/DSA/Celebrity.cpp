#include <bits/stdc++.h>
#include <set>
using namespace std;

class Solution{
public:
int celebrity(vector<vector <int>> &M,int n) {
    int celebrity=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            if(M[i][j]==1 && M[j][i]==0)
                celebrity=j;

            }

        }
        return celebrity;
    }
};

int main(){
    int n;
    cin >>n;
    // a great way to make a multidimensional matrix
    vector <int>something(n);
    vector <vector <int>> party_matrix(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j =0; j<n;j++)
        {
            cin >> party_matrix[i][j];
        }
    }
    Solution obj;
    cout << obj.celebrity(party_matrix, n);
}