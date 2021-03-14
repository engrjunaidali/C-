#include <iostream>
#include <conio.h>
#include <string.h> 
using namespace std;

void deletion(string T, int R, int L){
    // extracting substring temp1
    //1. temp 1= substring (T, 1, R-1)
	string temp1 = T.substr(0, R-1);
	cout << "temp1 = " << temp1 << endl;
	
	// extracting substring temp2	
	//2. temp 2 = substring (T, R+L, length (T) –R –L +1)
	string temp2 = T.substr(R+L-1,int(T.length()-R-L+1));
	cout << "temp2 = " << temp2 << endl;
	
	// concatenating temp1 and temp2
	//3. T = concatenate (temp 1, temp 2).
	T = temp1 + temp2;
	cout << "T = temp1 // temp2 = "<< T << endl;
}

int main(){
    // text T, position R, length l
	string T = "Master of Computer Science";
	int R = 11; 	
	int L = 8;
	
    
    //printing values
    cout << "T = " << T << endl;
    cout << "R = " << R << endl;
    cout << "L = " << L << endl;
    cout << "******************************************"<<endl;
    
    deletion(T,R,L);
}
