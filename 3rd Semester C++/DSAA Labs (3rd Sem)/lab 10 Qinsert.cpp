#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	int MAXSTR = 4;	//MAXSTR which gives maximum number of the elements that can be held by the QUEUE
	cout << "Enter how many maximum numbers can be held by QUEUE :"; cin >> MAXSTR;
	MAXSTR = MAXSTR - 1;
	int QUEUE[MAXSTR] = {};
	int N=3;
	cout<< "How many elements do you want to enter in array : "; cin >> N;
	

//	Store user inputs in array
	for (int i=0;i<N;i++){
		if (i<MAXSTR+1){
			cout <<"Enter at element in position "<< i+1 <<" :";cin >> QUEUE[i];	
		} else{
			cout <<"Overflow, QUEUE can hold just "<<MAXSTR<<" elements."<< endl;
			return 0;
		}
	}

	cout << endl << "Note : 0 in the QUEUE indicates the empty space."<<endl;

//	Printing Array Elements before Insertion
	cout << endl << "Elements of QUEUE before Insertion"<<endl;
	for (int j=0; j<MAXSTR+1 ; j++){ //MAXSTR/N
        cout << QUEUE[j] << "  ";
    }
    
    int FRONT,REAR,ITEM;
    FRONT = 0;
    N = N -1;
    REAR = N;
    cout << endl <<"FRONT :" << FRONT<<endl;
	cout << "REAR :" << REAR << endl;
	cout << "Enter ITEM: "; cin >> ITEM;
	
    if (FRONT==0 and REAR==MAXSTR or FRONT == REAR + 1){
    	cout << "OVERFLOW, QUEUE cannot hold more than "<<MAXSTR+1<<" elements."<< endl;
    	return 0;
	} else if (FRONT == -1){
		FRONT = 0; REAR = 0;
	} else if (REAR == MAXSTR){
		REAR = 0;
	} else {
		REAR = REAR + 1;
	}
	QUEUE [REAR] = ITEM;
	
//	Printing Array Elements after Push function
 	cout << endl << "Elements of QUEUE after Insertion"<<endl;
	for (int j=0; j<=MAXSTR ; j++){
        cout << QUEUE[j] << "  ";
    }
}



