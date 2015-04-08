//Name: Filmon H. Gebreyesus
//Bubble sort demonstration
#include<iostream>
using namespace std;

void swap(int &x, int &y);
void bubble_sort(int a[]);
void insertion_sort(int a[]);

int main()
{
	int a[6]={5,3,0,2,4,1};
	cout << "Before sorting " << endl;
	for (int i=0;i<6;i++)
		cout << a[i] << " " << endl;
	bubble_sort(a);	
	cout << "After bubble sorting " << endl;
	for (int i=0;i<6;i++)
		cout << a[i] << " " << endl;
	int b[6]={5,3,0,2,4,1}; //reset to unsorted 
	insertion_sort(b);
	cout << "After Insertion sorting " << endl;
	for (int i=0;i<6;i++)
		cout << b[i] << " " << endl;


	return 0;

}
//bubble sort
void bubble_sort(int a[])
{
	int i,j,n=6;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
//insertion sort
void insertion_sort(int a[])
{
	int i,j,n=6;
	for(i=1;i<n;i++)
	{
		j=i;
		while((a[j-1]>a[j]) && (j>0))
		{
			swap(a[j-1],a[j]);
			j--;	
		}
	}

}
//swap
void swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;

}
