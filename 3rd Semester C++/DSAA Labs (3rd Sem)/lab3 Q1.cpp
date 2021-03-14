#include <iostream>
#include <conio.h>
#include <string.h> 
using namespace std;


void REPLACE(string T,string P, string Q,int INDEX){
	int R = int(P.length());
	// extracting substring temp1
	string temp1 = T.substr(0, INDEX-1);
	cout << "temp1 = " << temp1 << endl;
	// extracting substring temp2	
	string temp2 = T.substr(INDEX+R-1,int(T.length()));
	cout << "temp2 = " << temp2 << endl;
	T = temp1 + Q + temp2;
	cout << "T = " << T;
	
}
int main(){
	string T = "ABCDEFG";
	string P = "DE";
	string Q = "X";
	
	//printing values
    cout << "T = " << T << endl;
    cout << "P = " << P << endl;
    cout << "Q = " << Q << endl;
    cout << "******************************************"<<endl;
	
	int R = int(P.length());
	int S = int(T.length());
	
	int K = 1, MAX = S-R+1;

	
	int L,INDEX = 1;
	while (K <= MAX){
		for (int L = 0;L < R;L++){
             if(P[L]!=T[L+K]){
                 break;
             }else if(L==R-1){
                 INDEX=K;
             }
		}
		K = K +1;
	}
	if (INDEX == 0){
		cout << "Failure";
	}else {
		cout << "Success, index of P is ";
		cout << INDEX << endl;
	}
	
	REPLACE(T,P,Q,INDEX);
	
}
