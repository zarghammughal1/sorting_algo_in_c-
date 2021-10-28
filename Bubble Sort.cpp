#include<iostream>
using namespace std;
void BubbleSort(int data[],int n)
{
	int i, j, temp;
	for(int i=0; i<(n-1); i++)
	{
		for(int j=0; j<(n-1); j++)
			if(data[j] > data[j+1])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		
	}
	cout<< endl << "Data After Sorting:" << endl;
	for(int j=0 ; j<n ; j++)
	{
		cout << data[j] << endl;
	}
}
int main()
{
	int size;
	cout << "Enter The Size Of Array: "; cin >> size;
    int data[size];
    for(int i=0;i<size;i++)
	{
		cout << "Enter " << i << " Element: "; 
		cin>>data[i];
	}
	
	BubbleSort(data,size);
	return 0;
}
