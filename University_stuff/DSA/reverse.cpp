#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T= 0;
	cin >> T;
	int numbers[T];
	for(int i=0; i<T; i++){
	    cin >> numbers[i];
	}

	for(int i=0; i<T;i++){
	    int numb = numbers[i];
        double temp = 0.0;
        int rem =0;
        int diz = log10(numb) +1;
        // cout << diz;
	    while(diz){
            rem = numb %10;
            temp += rem*(pow(10,diz-1));
            numb = numb /10;
            diz--;
	    }
	    cout << temp<< "\n";
	}
    return 0;
}

