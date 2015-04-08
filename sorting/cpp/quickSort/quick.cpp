//Filmon H. Gebreyesus
//Quick Sort 
//April 6, 2015

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int *mergeSort(int a[], int s, int n);
int swap(int &x, int &y);
int main()
{
	int a[7]={1,0,3,6,2,5,4};
	cout << "before merge sort " << endl;
	for(int i=0;i<7;i++)
		cout << a[i] << endl;
	int *b=mergeSort(a,0,6);
	cout << "after merge sort " << endl;
	for(int i=0;i<7;i++)
		cout << b[i] << endl;

	return 0;
}

int *mergeSort(int a[], int s,int n)
{
	srand(time(NULL));
	if((n-s)<2)
		return a;
	int i=s,j=n;
	int piv=rand()%(n-s);
	cout << "pivot " << a[piv] << endl;
		while((a[i]<=a[piv]) && (i<=piv))
		{
			i++;
		}
		while((a[j]>=a[piv]) && (j>=piv))
		{
			j--;
		}
		swap(a[i],a[j]);
		cout << "a[i]= " << a[i] << "a[j]= " << a[j] << endl;
	cout << "Intermediate " << endl;	
	for(int k=0;k<7;k++)
		cout << a[k] << endl;
	mergeSort(a,s,i-1);
	mergeSort(a,j+1,n); 

	return a;
}

int swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
