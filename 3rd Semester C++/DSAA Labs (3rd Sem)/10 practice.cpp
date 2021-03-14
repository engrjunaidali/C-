#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	int MAXSTR=5;
	int QUEUE[5] = {};
	int N;
	cout<< "How many elements do you want to enter in array(less than 6) : "; cin >> N;


//	Store user inputs in array
	for (int i=0;i<N;i++){
		if (i<MAXSTR+1){
			cout <<"Enter at element in position "<< i+1 <<" :";cin >> QUEUE[i];	
		} else{
			cout <<"Overflow, QUEUE can hold just "<<MAXSTR<<" elements."<< endl;
			return 0;
		}
		
	}
	
//	Printing Array Elements before Insertion
	for (int j=0; j<N ; j++){
        cout << QUEUE[j] << "  ";
    }
    
    
    
	
}
