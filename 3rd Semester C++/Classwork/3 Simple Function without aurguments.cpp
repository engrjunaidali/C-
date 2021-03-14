#include <iostream>
using namespace std;

void starline();							// function declaration
int main(){
	starline();								// Calling function
	cout << "Datatype\t Range";
	cout << "char";
}

void starline(){							// function declarator
	for (int i = 0;i<45;i++)
		cout << "*";
	cout << endl;
}


