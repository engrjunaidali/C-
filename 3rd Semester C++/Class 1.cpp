#include <iostream>
#include <conio.h>
using namespace std;

class junaid{
	private:
		int ans;
	public:
		void getdata(int a,int b){
		
			cout << "Enter a :"; cin >> a;
			cout << "Enter b :"; cin >> b;
			ans = a*b;		
		}
		
		void process(){
			
			cout << ans;
			}
			
			
};

int main(){
	junaid j1,j2;
	j1.getdata(3,4);
	j1.process();
	
}
