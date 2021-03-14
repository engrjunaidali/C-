#include <iostream>
using namespace std;

class Stack{
	private:
		int st[3],top;
	public:
		class Range{
		};
		
		Stack(){
			top = -1;
		}
		
		void push(int var){
			if (top>=3-1)
				throw Range();
			st[++top] = var;
		}
		
		int pop(){
			if (top<0)
				throw Range();
			return st[top--];
		}
};

int main(){
	Stack s1;
	try{
		s1.push(11);
		s1.push(22);
		s1.push(33);
	}
}
