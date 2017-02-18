#include<iostream>
using namespace std;

int main()
{
	int n=5;
	int A[n]={9,7,1,0,5};
	cout << "Original Sort \n9 7 1 0 5" << endl << endl;	
	for(int i=0;i<n-1;i++) {
		{
		int min=A[i], index=i;
		for(int j=i+1;j<n;j++) {
			if(A[j] < min) {
				cout << "Swapped " << min << " and " << A[j] << endl << endl;
				min = A[j];
				index=j;		
			}		
		}
			A[index] = A[i];
			A[i] = min;	
		}
			cout << "Selection Sorted" << endl;
			for (int k=0;k<5;k++) 
			cout << A[k] << " ";
			cout<< endl;
		}
			return 0;
}
