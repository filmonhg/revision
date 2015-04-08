//Filmon H. Gebreyesus
//Quick Sort 
//April 6, 2015

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int *selectionSort(int a[], int n);
int swap(int &x, int &y);
int main()
{
	int a[7]={1,0,3,6,2,5,4};
	cout << "before merge sort " << endl;
	for(int i=0;i<7;i++)
		cout << a[i] << endl;
	int *b=selectionSort(a,7);
	cout << "after merge sort " << endl;
	for(int i=0;i<7;i++)
		cout << b[i] << endl;

	return 0;
}

int *selectionSort(int a[],int n)
{
	int min;
	int min_index;
	for(int j=0;j<n;j++)
	{
		min=a[j];
		min_index=j;
		for(int i=j;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				min_index=i;
			}
		}
		swap(a[j],a[min_index]);
	}
	return a;
}

int swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
