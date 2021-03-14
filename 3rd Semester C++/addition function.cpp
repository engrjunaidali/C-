#include <iostream>

using namespace std;

int addition (int a,int b){
	int r;
	r = a+b;
	return r;
}

int main(){
	int x,y,z;
	cout << "Please enter x :"; cin>> x;
	cout << "now enter y :"; cin >> y;
	
	z = addition (x,y);
	cout << "The result is " << z;
	
}
