#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	int MAXSTR;	//MAXSTR which gives maximum number of the elements that can be held by the QUEUE
	cout << "Enter how many maximum numbers can be held by QUEUE :"; cin >> MAXSTR;
	MAXSTR = MAXSTR - 1;
	int QUEUE[MAXSTR] = {};
	int N;
	cout<< "How many elements do you want to enter in array : "; cin >> N;
	
//	Store user inputs in array
	for (int i=0;i<N;i++){
		if (i<MAXSTR+1){
			cout <<"Enter at element at position "<< i+1 <<" :";cin >> QUEUE[i];	
		} else{
			cout <<"Overflow, QUEUE can hold just "<<MAXSTR+1<<" elements."<< endl;
			return 0;
		}
	}
	cout << endl << "Note : 0 in the QUEUE indicates the empty space."<<endl;
//	Printing Array Elements before Deletion
	cout << endl << "Elements of QUEUE before Deletion"<<endl;
	for (int j=0; j<MAXSTR+1 ; j++){ //MAXSTR/N
        cout << QUEUE[j] << "  ";
	}
	
	int FRONT,REAR,ITEM;
    FRONT = 0;
    N = N -1;
    REAR = N;
    cout << endl<< endl <<"Position of FRONT:" << FRONT+1<<endl;
	cout << "Position of REAR :" << REAR+1 << endl;
// 	Deleting Element
	if (FRONT == - 1 || FRONT > REAR) {
      cout<<"Queue Underflow ";
      return 0;
   } else {
   		ITEM = QUEUE [FRONT];
      	cout<<"Element deleted from queue is : "<< QUEUE[FRONT] <<endl;
      	QUEUE [FRONT] = 0;
      	FRONT++;;
   }
//	Printing QUEUE Elements after Deletion
 	cout << endl << "Elements of QUEUE after Deletion"<<endl;
	for (int j=0; j<=MAXSTR ; j++){
        cout << QUEUE[j] << "  ";
    }
}
