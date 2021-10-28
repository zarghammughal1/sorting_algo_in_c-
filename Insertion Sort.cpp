#include<iostream>
using namespace std;


void insertion_sort(int data[], int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		temp = data[i];
		for(j=i;(data[j-1]> temp && j>0);j--)
		{
			data[j] = data[j-1];
		}
		data[j]= temp;
	}
	cout << endl << "Data After Sorting:" << endl;
	for(int j=0 ; j<n ; j++)
	{
		cout << data[j] << endl;
	}
}

int main() 
{ 
    int size;
	cout << "Enter The Size Of Array: "; cin >> size;
	int array[size], key , i;
	for(int j=0 ; j<size ; j++)
	{
		cout << "Enter " << j << " Element: "; cin >> array[j];
	}
    insertion_sort(array, size );
    return 0; 
}
