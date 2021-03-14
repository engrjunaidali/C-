#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int n;
	cout<< "How many elements do you want to enter in array : "; cin >> n;
	int DATA[5] = {};

//	Store user inputs in array
	for (int i=0;i<n;i++){
		cout << "Enter at "<< i+1 <<" :";cin >> DATA[i];
	}
	
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
