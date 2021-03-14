#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	string T = "Computer Science";
	string P = "put";
	
	int R = int(P.length());
	int S = int(T.length());
	
	int K = 1, MAX = S-R+1;

	
	int L,INDEX = 0;
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
		cout << "Success, index is ";
		cout << INDEX;
	}
	
}
