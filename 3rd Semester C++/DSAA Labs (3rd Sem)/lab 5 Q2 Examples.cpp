#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n = 5;
	int DATA[n] = {5,3,4,1,6};

//	Printing Array Elements
	for (int j=0; j<n ; j++){
        cout << DATA[j] << "  ";
    }
	
	int ITEM=1;
	
	cout << endl;
	cout << "Enter ITEM to know its position : "; cin >> ITEM;
	
	cout << endl << endl <<"ITEM : " << ITEM << endl;
	
	int K =0, LOC = 0;
	while(K!=n){
		if (ITEM == DATA[K]){
			LOC = K+1;
		}
		K = K + 1;
	}
	
	if(LOC == 0){
		cout << "Item is not in array";
	} else{
		cout << "Position of ITEM " << ITEM << " is " << LOC;
	}

}

