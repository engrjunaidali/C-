#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n=5;
	int DATA[n] = {3,9,4,8,2};

//	Printing Array Elements
	for (int j=0; j<n ; j++){
        cout << DATA[j] << "  ";
    }

// Algorithm
	int K = 0, LOC = 0, MAX = DATA[0];
	
	while (K<n){
		if (MAX<DATA[K]){
			LOC = K+1; MAX = DATA[K];
		}
		K = K + 1;
	}
	cout << endl;
	cout << "LOC : " << LOC << endl;//correct
	cout << "MAX : " << MAX;
	return 0;
}
