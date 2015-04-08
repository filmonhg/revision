//Filmon H. Gebreyesus
//Merge Sort 
//April 6, 2015

#include<iostream>
using namespace std;

int *mergeSort(int a[], int n);
int *merge(int l1[],int m,int l2[],int n);
int main()
{
	int a[7]={1,0,3,6,2,5,4};
	cout << "before merge sort " << endl;
	for(int i=0;i<7;i++)
		cout << a[i] << endl;
	int *b=mergeSort(a,7);
	cout << "after merge sort " << endl;
	for(int i=0;i<7;i++)
		cout << b[i] << endl;

	return 0;
}

int *mergeSort(int a[], int n)
{
	if(n==1)
		return a;
	int m=n/2;
	int j=0;
	int *l1=new int[m];
	int *l2=new int[n-m];
	for(int i=0;i<m;i++)
		l1[i]=a[i];
	for(int i=m;i<n;i++)
	{
		l2[j++]=a[i];
	}

	l1=mergeSort(l1,m);
	l2=mergeSort(l2,(n-m));
	
	return merge(l1,m,l2,(n-m));
}

int *merge(int l1[],int m,int l2[],int n)
{
	int i=0,j=0,k=0;
	int *a=new int [m+n];
	while((i<m)&&(j<n))
	{
		if(l1[i]<=l2[j])
		{
			a[k++]=l1[i];
			i++;
		}
		else
		{
			a[k++]=l2[j];
			j++;
		}
	}
	while(i<m)
	{
		a[k++]=l1[i];
		i++;
	}
	while(j<n)
	{
		a[k++]=l2[j];
		j++;
	}

	return a;
}			
