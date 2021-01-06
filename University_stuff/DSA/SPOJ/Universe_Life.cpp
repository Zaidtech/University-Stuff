#include <iostream>
using namespace std;
#include <vector>

int main() {
	vector <int> v;
	int input = 0;
	int i =0;
	while(true){
		cout <<"Enter the value :";
		cin >> v[i];
		if (v[i] == 42) break;
		i++;
	}

	for(int j=0 ; j<i;j++){
		cout << v[j];
	}
	
	return 0;
}