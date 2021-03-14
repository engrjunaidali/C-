#include <iostream>
using namespace std; 
int main(){
int r1,c1 ,r2 , c2 ,i,j,k;
int A[5][5], B[5][5], c[5][5];

cout << "Enter number of rows of matrix A: \t"; cin >> r1;
cout << "Enter number of colums of matrix A: \t"; cin >>c1;
cout << "Enter number of rows of matrix B: \t"; cin >> r2;
cout << "Enter number of colums of matrix B: \t"; cin >>c2;

if(c1!=r2){
	cout<<"matrices cannot be multiplied :";
	return 0;
}
//Entering Elements into matrix A
cout<<endl<<"Enter elements of matrix A:" << endl; 
for (i=0; i<r1;i++){
	for(j=0;j<c1;j++){
		cout<< "Enter at position "<<i+1<<j+1 <<" : ";cin>>A[i][j]; 	
	}
}
//Entering Elements into matrix B
cout<<endl<<"Enter elements of matrix B:" << endl; 
for (i=0; i<r2;i++){
	for(j=0;j<c2;j++){
		cout<< "Enter at position "<<i+1<<j+1 <<" : ";cin>>B[i][j];
	}	
}
//Multiplying Matrices A and B
for (i=0; i<r1;i++){
	for(j=0;j<c1;j++){
		c[i][j]=0; for(k=0;k<r2;k++){
		c[i][j]+=A[i][k]*B[k][j];
		}
	}
}
//Printing Matrices
cout<<endl<<"Product of matrices \n"; 
for(i=0;i<r1;i++){
	cout<<"\n";
	for(j=0;j<c2;j++) {
		cout<<c[i][j]<<"\t"; 	
	}
}
return 0;
}

