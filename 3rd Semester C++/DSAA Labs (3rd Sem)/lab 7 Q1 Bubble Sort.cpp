#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int N;
	cout<< "How many elements do you want to enter in array : "; cin >> N;
	int DATA[N] = {};
//	Store user inputs in array
	for (int i=0;i<N;i++){
		cout << "Enter at element in position "<< i+1 <<" :";
		cin >> DATA[i];}

    for(int K=0; K<N-2; K++){
		int PTR=0; 
        while(PTR <= N-K-2){
              if(DATA[PTR]>DATA[PTR+1]){
                  int temp = DATA[PTR];
                  DATA[PTR] = DATA[PTR+1];
                  DATA[PTR+1] =temp;
              }
              PTR = PTR+1;
        }
      }
    //	Printing Array Elements
	for (int j=0; j<N ; j++){
        cout << DATA[j] << "  ";
	}
}



