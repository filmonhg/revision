//Filmon Gebreyesus
//03/04/2015
//demo for data structure concepts
using namespace std;
class Llist
{
private:
	struct Node
	{
		string data;
		Node* next;
	};

	Node* head;
	Node* tmpPtr;
	Node* prev;
	int size;
public:
	Llist();
	~Llist();
	void push_back(string data);
	string search_data(string search_data);	
	void display();
	void obliterate(string delete_data);
};
