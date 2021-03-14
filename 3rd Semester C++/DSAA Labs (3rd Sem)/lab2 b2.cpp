#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	string T = "INFORMATION";
	string P = "FORM";
	
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
	    INDEX = INDEX + 1;
		cout << "Success, index of P is ";
		cout << INDEX << endl;
	}
	
}
