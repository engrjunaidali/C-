#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int MAXSTR;	//MAXSTR which gives maximum number of the elements that can be held by the stack
	cout << "Enter how many maximum numbers can be held by STACK :"; cin >> MAXSTR;
	MAXSTR = MAXSTR - 1;
	int STACK[MAXSTR] = {};
	int N;
	cout<< "How many elements do you want to enter in array : "; cin >> N;
//	Store user inputs in array
	for (int i=0;i<N;i++){
		if (i<MAXSTR+1){
			cout <<"Enter at element in position "<< i+1 <<" :";cin >> STACK[i];	
		} else{
			cout <<"Overflow, STACK can hold just "<<MAXSTR<<" elements."<< endl;
			return 0;
		}	
	}
//	Printing Array Elements before Pop function
	cout << "Initial STACK : ";
	for (int j=0; j<N ; j++){
        cout << STACK[j] << "  ";
    }
    int TOP = N-1, ITEM;
    if (TOP == -1){
    	cout << "UNDERFLOW, STACK has no element to remove."<< endl;
    	return 0;
	} else{
		ITEM = STACK[TOP];
		TOP = TOP - 1;
//	STACK[TOP] = ITEM;
		cout << endl<<"ITEM "<<STACK[TOP]<<" is poped" <<endl<<"Resulting STACK : ";
	}
//	Printing Array Elements after Push function
	for (int j=0; j<=TOP ; j++){
        cout << STACK[j] << "  ";
    }
}



