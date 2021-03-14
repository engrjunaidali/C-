#include <iostream>
using namespace std;

class time{
	private:
		int second,minute,hour;
	public:
		
		//No Argument Constructor
		time(){
			second = 1;
			cout << "\t\tNo Argument Constructor\n";
			cout << second <<endl; //<< endl << minute << endl << hour << endl;
		}
		
		//Multiple Argument Constructor
		time(int s,int m,int h){
			second = s; minute = m, hour = h;
			cout << "\t\tMultiple Argument Constructor\n";
			cout << "seconds = " << second << "\nminutes = " << minute << "\nhour = " << hour ;
		}
		
};

int main(){
	time t1;
	
	time t2(12,12,12);}
