//Filmon Gebreyesus
//03/04/2015
//demo for data structure concepts
#include<iostream>
#include"stack.h"
#include<string.h>
using namespace std;

Llist::Llist()
{
	top=NULL;
	size=0;
}

Llist::~Llist()
{
	while(top!=NULL)
	{
		tmpPtr=top;
		top=top->next;
		delete tmpPtr;
	}
	
}
void Llist::push_back(string data)
{
	Node* new_node=new Node;
	new_node->data=data;
	new_node->next=top;
	top=new_node;
}
bool Llist::is_empty()
{
	if(top==NULL)
		return true;
	else
		return false;
}
string Llist::pop()
{
	string poped;
	if(!is_empty())
	{
		poped=top->data;
		tmpPtr=top;
		top=top->next;
		delete tmpPtr;
		tmpPtr=NULL;
		return poped;
	}
	else
		return "-1";
	
}
string Llist::search_data(string search_data)
{
	tmpPtr=top;
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
	tmpPtr=top;
	while(tmpPtr!=NULL)
	{
		cout<<tmpPtr->data<<endl;
		tmpPtr=tmpPtr->next;
	}
}

void Llist::obliterate(string delete_data)
{

	tmpPtr=top;
	prev=top;
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
	else if ((tmpPtr!=NULL) && (!delete_data.compare(top->data))) 
	{
		top=top->next;
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


