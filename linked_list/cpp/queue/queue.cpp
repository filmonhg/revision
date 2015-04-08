//Filmon Gebreyesus
//03/04/2015
//demo for data structure concepts
#include<iostream>
#include"queue.h"
#include<string.h>
using namespace std;

Llist::Llist()
{
	front=NULL;
	size=0;
}

Llist::~Llist()
{
	while(front!=NULL)
	{
		tmpPtr=front;
		front=front->next;
		delete tmpPtr;
	}
	
}
void Llist::push_back(string data)
{
	Node* new_node=new Node;
	new_node->data=data;
	new_node->next=NULL;
	if(is_empty())
	{
		front=new_node;
		rear=front;
	}
	else
	{
		rear->next=new_node;
		rear=new_node;	
	}
}
bool Llist::is_empty()
{
	if(front==NULL)
		return true;
	else
		return false;
}

string Llist::pop()
{
	if(!is_empty())
	{
		tmpPtr=front;
		string poped=front->data;
		front=front->next;
		delete tmpPtr;
		tmpPtr=NULL;
		
		return poped;
	}
	else
		return "-1";

}

string Llist::search_data(string search_data)
{
	tmpPtr=front;
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
	tmpPtr=front;
	while(tmpPtr!=NULL)
	{
		cout<<tmpPtr->data<<endl;
		tmpPtr=tmpPtr->next;
	}
}

void Llist::obliterate(string delete_data)
{

	tmpPtr=front;
	rear=front;
	while((tmpPtr!=NULL) && (delete_data.compare(tmpPtr->data)))
	{
		rear=tmpPtr;
		tmpPtr=tmpPtr->next;

	}
	if(tmpPtr==NULL)
	{
		cout << "Null " << endl;
		return;
	}
	else if ((tmpPtr!=NULL) && (!delete_data.compare(front->data))) 
	{
		front=front->next;
		delete tmpPtr;
		tmpPtr=NULL;	
	}
	else
	{
		rear->next=tmpPtr->next;
		delete tmpPtr;
		tmpPtr=NULL;	

	}
	
	cout << delete_data << " deleted " << endl;
				

	
}


