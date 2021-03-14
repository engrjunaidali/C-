

#include <iostream>
using namespace std;

void sqaures(){
	cout << "Sqaures from 1 to 5" <<endl;
	for (int i=1; i<6;i++)
	cout << i << " = " <<i*i <<endl; 
}

void cubes(){
		cout << "Cubes from 1 to 5" <<endl;

	for (int i=1; i<6;i++)
		cout << i << " = " <<i*i*i <<endl; 
}

void forths(){
		cout << "Forth Powers from 1 to 5" <<endl;

	for (int i=1; i<6;i++)
		cout << i << " = " <<i*i*i*i <<endl; 
}
int main(){
	sqaures();
	cubes();
	forths();
}
