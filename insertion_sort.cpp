#include<iostream>
using namespace std;

int main()
{	
	int n=5;
	int A[n]={99,77,12,0,56};
	int j,i;
	cout << "Original Sort \n99 77 12 0 56" << endl << endl;
	for (i=1;i<n;i++) {
		{
		int tmp=A[i];
		for (j=i-1;j>=0 && tmp<A[j];j--) {
			cout << "Swapped " << A[j] << " and " << A[j+1] << endl;
			A[j+1] = A[j];
		}
		A[j+1] = tmp;
		cout << "Insertion Sorted" << endl;
		for (int k=0;k<5;k++) 
				cout << A[k] << " ";
				cout<< endl << endl;
		}
	}		
return 0;
}
