#include <iostream>
using namespace std;

int main(){

    int a[] = {1,4,5,6,7,5,6,3,6,3,3,78,23,223,25};
    int n = 8;
    for(int i=5;i>=0;i++){
        
    }
//  Deleting an element from an array
    int d = 4;
    for(int i=0; i< 3; i++)
    {
        cout << "hi!!";
        }

 //Binary Seach works on sorted arrays
int l = 20;
int item = 30;
int low =0;
int high = l-1;
int mid =0; 
while(low<=high){

    mid = (high+low)/2;

    if(item == mid) cout << "NO found in the medium";
    else if(item < mid){
        high = mid-1;
        
    }
    else if(item>mid){
        low = mid+1;
    }
}
}