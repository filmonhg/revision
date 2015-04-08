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

	Node* front;
	Node* tmpPtr;
	Node* rear;
	int size;
public:
	Llist();
	~Llist();
	void push_back(string data);
	string search_data(string search_data)
;
	bool is_empty();	
	void display();
	void obliterate(string delete_data);
	string pop();
};
