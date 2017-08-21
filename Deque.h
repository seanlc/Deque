#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node * next;
  Node * last;
};

class Deque
{
  public:
    Deque()
    : front (nullptr), back (nullptr), numNodes (0)
    {}
    ~Deque()
    {
        makeEmpty();
    }
    bool isEmpty()
    {
        return numNodes == 0;
    }
    void makeEmpty()
    {
        Node * trav = nullptr;
	while(front != nullptr)
	{
	    trav = front;
	    front = front->next;
	    delete trav;
	}
	numNodes = 0;
    }
    void push_back(int n)
    {
        Node * newNode = new Node;
	newNode-> data = n;
	newNode->next = nullptr;
	newNode->last = back;
	if(front == nullptr && back == nullptr)
	    front = newNode;
	else
	    back->next = newNode;
	back = newNode;
	++numNodes;
    }
    void push_front(int n)
    {
        Node * newNode = new Node;
	newNode->data = n;
	newNode->next = front;
	newNode->last = nullptr;
	if(front == nullptr && back == nullptr)
	    back = newNode;
	else
	    front->last = newNode;
	front = newNode;
	++numNodes;
    }
    int pop_back()
    {
	Node * tmp = back;
        int returnVal = back->data;
	back = back->last;
	back->next = nullptr;
	delete tmp;
	--numNodes;
	return returnVal;
    }
    int pop_front();
    int peek_back()
    {
	if (! isEmpty() )
            return back->data;
	cout << "deque is empty " << endl;
	return -1;
    }
    int peek_front();
    void print()
    {
        Node * trav = front;
	while(trav != nullptr)
	{
	    cout << "node with val " << trav->data << endl;
	    trav = trav->next;
	}
    }
    void revPrint()
    {
        Node * trav = back;
	while(trav != nullptr)
	{
	    cout << "node with val " << trav->data << endl;
	    trav = trav->last;
	}
    }
  private:
    Node * front;
    Node * back;
    int numNodes;
};
