#include <bits/stdc++.h>
using namespace std;



void frequencycount(vector<int>& arr,int n)
{ 
 
    long long array[n+1] = {0};
    
    for(long long  i=0;i<=n;i++)
    {
        array[arr[i]]+=1;
    }
    
    for(long long i=1; i<=n;i++)
    {
        //   cout << array[i];
    
        arr[i-1] = array[i];
        // cout << arr[i];
    }
    // cout << "\n this is an end";
        
}



int main(){
    int n=0;
    n=5;
    vector <int> arr(n,0);
    arr = {2,3,2,3,5};
    frequencycount(arr,n);

    for(int i=0;i<n;i++)
        cout << arr[i]<<" ";
}
