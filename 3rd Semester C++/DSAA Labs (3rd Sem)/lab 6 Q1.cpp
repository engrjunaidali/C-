#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n;
	cout<< "How many elements do you want to enter in array : "; cin >> n;
	int DATA[n] = {};

	
	cout << endl << "Enter elements in ascending order" << endl;

//	Store user inputs in array
	for (int i=0;i<n;i++){
		cout << "Enter at element in position "<< i+1 <<" :";cin >> DATA[i];
	}
	
//	Printing Array Elements
	for (int j=0; j<n ; j++){
        cout << DATA[j] << "  ";
    }
	
	int ITEM = 8, BEG = 0, END = n-1, MID=(BEG+END)/2, LOC = -1;
	
	cout << endl;
	cout << "Enter ITEM to know its position : "; cin >> ITEM;
	
	cout << endl << endl <<"ITEM : " << ITEM << endl;
	 while(BEG<=END)
    {
    MID=(int)((BEG+END)/2);
    if(DATA[MID]==ITEM)
       {
       LOC=MID+1;
       cout << "Element found and its position is: " << LOC;
       break;
       }
    if(DATA[MID]>ITEM)
       END=MID-1;
    else if(DATA[MID]<ITEM)
         BEG=MID+1;
    }
    if(BEG>END)
  cout << "Not found";
 return 0;
}



