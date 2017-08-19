struct Node
{
  int data;
  Node * next;
  Node * last;
};

class Deque
{
  public:
    Deque();
    ~Deque();
    bool isEmpty();
    void makeEmpty();
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
