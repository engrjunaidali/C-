#include<iostream>
using namespace std;

void swapElements(int &a, int &b) {     
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void showArray(int *array, int size) {
   for(int i = 0; i<size; i++){
   		cout << array[i] << " ";
   }
   cout << endl;
}

void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int leftArray[nl], rightArray[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      leftArray[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rightArray[j] = array[m+1+j];
      
   i = 0; j = 0; k = l;
   while(i < nl && j<nr) {
      if(leftArray[i] <= rightArray[j]) {
         array[k] = leftArray[i];
         i++;
      }else{
         array[k] = rightArray[j];
         j++;
      }
      k++;
   }
   while(i<nl) {      
      array[k] = leftArray[i];
      i++; k++;
   }
   while(j<nr) {     
      array[k] = rightArray[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main() {
   int n;
   cout << "How many elements you will enter: "; cin >> n;
   int arr[n];     
   for(int i = 0; i<n; i++) {
      cout << "Enter element at position "<<i+1<<" : ";cin >> arr[i];
   }
   cout << "Array before Merge Sort: \t";showArray(arr, n);
   mergeSort(arr, 0, n-1); 
   cout << "Array after Merge Sort: \t"; showArray(arr, n);
} 


