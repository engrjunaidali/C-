//Questions are in the constructor block
//getting input in the get_depart_name and get_teacher_name respectively.
//showing output in the show_depart_name and show_teacher_name respectively.

#include <iostream>
#include <conio.h>

using namespace std;
class College{
	private:
		string college_name;
		string city_name;
	public:

		void college_detail(){
			college_name = "NED University";
			city_name = "Karachi";
			cout << " at " << college_name << " " <<city_name;
		}
		
		
};
class Department: public College
{
	private:
		string department_name;
	public:
		//Asking qusetion about department.
		Department(){
			cout << "What is the name of your department ?\n";
		}
		//Getting input
		void get_depart_name(){
			cout << "Enter department's name : "; cin >> department_name;
		}
		//Showing Output
		void show_depart_name(){
			cout << "in the " << department_name << " department";
		}


};

class Teacher: public College
{
	private:
	string teacher_name;
	public:
	//Asking qusetion about Teacher.
	Teacher(){
		cout << "Which teacher is teaching you ?\n";
	}
	//Getting input.
	void get_teacher_name(){
		cout << "Enter teacher's name : "; cin >> teacher_name;
	}
	//Showing output.
	void show_teacher_name(){
		cout << "It means teacher " << teacher_name << " is teaching you ";
	}
};



int main(){
	Department d1;
	
	d1.get_depart_name();
	
	Teacher t1;
	t1.get_teacher_name();
	
	t1.show_teacher_name();
	d1.show_depart_name();
	
	College c1;
	c1.college_detail();
	
}
