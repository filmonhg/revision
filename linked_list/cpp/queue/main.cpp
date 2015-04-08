//Filmon Gebreyesus
//03/04/2015
//demo for data structure concepts
#include<iostream>
#include"queue.h"
#include<string.h>
using namespace std;


int main()
{
	Llist lst_obj;
	cout<<"Enter elements to linked list press exit to stop\n";
	string data;
	cin>> data;
	char stop[]="exit";
	while(strcmp((data.c_str()),stop))
	{
		lst_obj.push_back(data);
		cin>> data;
	}
	cout <<"to search an item type the item \n";
	string search_data;
	cin>>search_data;
	string searched=lst_obj.search_data(search_data);
	if((search_data.compare(searched))==0)
		cout << "Found item " <<"\""<<searched << "\""<<endl;
	else
		cout << "item " << "\""<<search_data << "\""<<"Not found" << endl;
	cout <<"Displaying data contents\n";
	lst_obj.display();

	cout <<"type the data to Delete/ Obliterate data\n";
	string deleteData;
	cin >> deleteData;
	lst_obj.obliterate(deleteData);  

	string poped=lst_obj.pop();
	while(poped.compare("-1"))	
	{
		cout << "Popped : " << poped << endl;
		poped=lst_obj.pop();	
	}	
	
	cout <<"Displaying data contents\n";
	lst_obj.display();



	return 0;
}

