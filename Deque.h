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
    void push_front(int n);
    int pop_back();
    int pop_front();
    int peek_back();
    int peek_front();
    void print();
    void revPrint();
  private:
    Node * front;
    Node * back;
    int numNodes;
};
