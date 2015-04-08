//demonstrating linked list with c++

#include<iostream>
#include<string.h>
using namespace std;

struct Node
{
	string data;
	Node* next;
};

Node* head;

int main()
{
	cout << "using linked list to input data\n";
	cout << " Enter data type \"exit\" to exit\n";
	string temp;
	char stop[]="exit";
	cin >> temp;
//	Node* newPtr= new Node;
//	newPtr->data=temp;
//	newPtr->next=NULL;
	head=NULL;
	while(strcmp((temp.c_str()),stop))
	{
		Node* newPtr= new Node;
		newPtr->data=temp;
		newPtr->next=head;
		head=newPtr;
		cin >> temp;
	}
	
	cout << "Printing the contents of the linked list\n";
	Node* tempPtr=head;
	while(tempPtr!=NULL)
	{
		cout << tempPtr->data << endl;
		tempPtr=tempPtr->next;
	}
	return 0;

}
