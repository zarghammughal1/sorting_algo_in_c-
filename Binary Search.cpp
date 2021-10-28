#include<iostream>
using namespace std;


void BinarySearch(int data[], int n)
{
	int i=0,j=n,k,search_key;
    bool found = false;
    cout<< "Enter Search Key: ";
    cin>> search_key;
	while(i<=j)
    {
    	k=(i+j)/2;
    	if(search_key ==  data[k])
    	{
    		found = true;
    		break;
		}
		else if(search_key> data[k])
		i = k+1;
		else
		j = k-1;
	}
	if (found)
	cout<< "Element is Found at Index " << k << ".";
	else
	cout<<"Element is Not Found.";
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
	    
    BinarySearch(data,size);
    return 0; 
}
