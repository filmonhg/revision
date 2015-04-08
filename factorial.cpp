//Fimon H. Gebreyesus
//04/05/2015
//Recursion (factorial of number)

#include<iostream>

using namespace std;
int factorial(int n);

int main()
{
	int n;
	cout << "Enter number to calcualte factorial " << endl;
	cin >> n;

	int fact=factorial(n);
	cout << "Factorial of  " << n  << " is " << fact << endl;

	return 0;
}

int factorial (int n)
{

	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}

