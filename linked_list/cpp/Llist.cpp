//Filmon Gebreyesus
//03/04/2015
//demo for data structure concepts
#include<iostream>
#include"Llist.h"
#include<string.h>
using namespace std;

Llist::Llist()
{
	head=NULL;
	size=0;
}

Llist::~Llist()
{
	while(head!=NULL)
	{
		tmpPtr=head;
		head=head->next;
		delete tmpPtr;
	}
	
}
void Llist::push_back(string data)
{
	Node* new_node=new Node;
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}

string Llist::search_data(string search_data)
{
	tmpPtr=head;
	while(tmpPtr!=NULL)
	{
		if((search_data.compare(tmpPtr->data))==0)
			return tmpPtr->data;
		tmpPtr=tmpPtr->next;
	}
			return "";

}

void Llist::display()
{
	tmpPtr=head;
	while(tmpPtr!=NULL)
	{
		cout<<tmpPtr->data<<endl;
		tmpPtr=tmpPtr->next;
	}
}

void Llist::obliterate(string delete_data)
{

	tmpPtr=head;
	prev=head;
	while((tmpPtr!=NULL) && (delete_data.compare(tmpPtr->data)))
	{
		prev=tmpPtr;
		tmpPtr=tmpPtr->next;

	}
	if(tmpPtr==NULL)
	{
		cout << "Null " << endl;
		return;
	}
	else if ((tmpPtr!=NULL) && (!delete_data.compare(head->data))) 
	{
		head=head->next;
		delete tmpPtr;
		tmpPtr=NULL;	
	}
	else
	{
		prev->next=tmpPtr->next;
		delete tmpPtr;
		tmpPtr=NULL;	

	}
	
	cout << delete_data << " deleted " << endl;
				

	
}


