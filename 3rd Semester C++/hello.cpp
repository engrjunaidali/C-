#include <iostream>

using namespace std;

int main()
{
	int m;
	cout << "Enter m: ";
	cin >> m;
	cout << "m =" << m << endl;
	
	double x,y,z;
	cin >> x >> y >> z;
	cout << "x :" << x << ", y :" << y << ",z :" << z <<endl;
	
	int x = 10;
	cout << "int :\t" << x << endl;
	
	int a = 11;
	cout <<"Increment :\t" << ++a <<endl;
	
	int b = 20;
	cout <<"Decreament :\t"<<--b  <<endl;
	
	cout <<"Add :\t\t"<<a+b<<endl;
	cout <<"Minus :\t\t"<<a-b<<endl;
	cout <<"Multiply :\t"<<a*b<<endl;
	cout <<"Divide :\t"<<a/b<<endl;
	cout <<"Modulus :\t"<<a%b<<endl;	
	
	if (a<b)
		{cout <<"a is less than b"<<endl;
	}
	
	if (a>b){
		cout<<"a is greater than b"<<endl;
	}
	
	else{cout <<"a is not greater than b"<<endl;
	}
	
	int i=0;
	while (i<10){
		cout << i << endl;
		i = i + 1; 
	}
}

