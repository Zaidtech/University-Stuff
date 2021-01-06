#include <iostream>
using namespace std;
//  hypothesis  n ---> n*n-1*n-2....3*2*1 = f
//  n-1 ---> n-1* n-2 * n-3 ......3 2 1= f

int f=1;
void fact(int n)
{
    if(n==1){
        cout << f;
        return;
    }
    f = f*n;
    fact(n-1);

}

int main(){
    fact(5);
}