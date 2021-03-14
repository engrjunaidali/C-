#include <iostream>
using namespace std;

class Base{
	public:
	void print(){
	cout << "Base Class";
	}
};

class Derived : public Base{
	public:
	void print(){ "Derived Class";
	}
};

int main(){
	Derived d;
	d.print();
}
