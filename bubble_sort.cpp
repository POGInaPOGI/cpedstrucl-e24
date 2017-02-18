#include<iostream>
using namespace std;

int main()
{
	int n=5;
	int A[n] = { 4, 78, 6, 13, 0};
	cout << "Original Sort \n4 78 6 13 0" << endl;	
	for (int i=n; i>1;i--) {
		{	
		for (int j=0;j<i-1;j++) {
			if (A[j] > A[j+1]) {
				cout << "Swapped " << A[j] << " and " << A[j+1] << endl;
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1]= swap;
				cout << "Bubble Sorted" << endl;
				for (int k=0;k<5;k++) 
				cout << A[k] << " ";
				cout<< endl << endl;
				}
			}
		}
	}	
	return 0;
}
