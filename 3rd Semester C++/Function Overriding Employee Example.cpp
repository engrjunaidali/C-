//Function Overriding Employee Example


#include <iostream>

using namespace std;

const int LEN = 80;

class employee{
	private:
		char name[LEN];
		unsigned long number;
	public:
		void getdata(){
			cout << "Enter last name :"; cin >> name;
			cout << "Enter Number :" ; cin >> number;
		}
		
		void putdata() const{
			cout << "Name : " << name;
			cout << "Number : " << number;
		}
};

class manager : public employee
{
	private:
		char title[LEN];
		double dues;
	public:
		void getdata(){
			employee :: getdata();
			cout << "Enter title :";  cin >> title;
			cout << "Enter dues :"; cin >> dues;
		}
		
		void putdata() const{
		employee :: putdata();
		cout << "Title :" << title;
		cout << "Dues :" << dues;
		}
};

int main(){
	manager m1;
	manager m2;
	m1.getdata();
	m2.putdata();
}
