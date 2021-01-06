#include <iostream>
using namespace std;

// 1 2 3 4 5
// 2 1
void wavy_sort(int *arr,int n){
    int temp=0;
          for(int i=0;i<n;i++)
        {
            if(i%2==0){
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }     
        }
}

int main(){
    int A[1,2,3,4,5,6,7];
    wavy_sort(A, 7);

    for(int i=0;i<7;i++)
        cout << A[i];
}
