#include <iostream>
#include <conio.h>
#include <string.h> 
using namespace std;

void insert(string T, int R, string P){
    // extracting substring temp1
	string temp1 = T.substr(0, R-1);
	cout << "temp1 = " << temp1 << endl;
	
	// extracting substring temp2	
	string temp2 = T.substr(R,int(T.length()));
	cout << "temp2 = " << temp2 << endl;
	
	//concatenating temp1 and P
	temp1 = temp1 + " " + P;
	cout << "temp1 = temp1 // P = " << temp1 << endl;
	
	// concatenating temp1 and temp2
	temp2 = temp1 +" "+ temp2;
	cout << "temp2 = temp1 // temp2 = "<< temp2 << endl;
	
	// assigning temp2 value to T
	T = temp2;
	cout << "T = "<< T << endl;
}

int main(){
	string T = "Department of Science";
	string P = "Computer"; 	
	int R = 14;
    
    //printing values
    cout << "T = " << T << endl;
    cout << "P = " << P << endl;
    cout << "R = " << R << endl;
    cout << "******************************************"<<endl;
    
    insert(T,R,P);
}
