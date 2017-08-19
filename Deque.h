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
    void push_back(int n);
    void push_front(int n)
    {
        Node * newNode = new Node;
	newNode->data = n;
	newNode->next = front;
	if(front != nullptr)
	    front->last = newNode;
	front = newNode;
	if(back == nullptr)
	    back = newNode;
    }
    int pop_back();
    int pop_front();
    int peek_back();
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
