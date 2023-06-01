class Node {
public:

   Node(int data, Node* next);
   Node(Node& other);

   int    data;
   Node*  next;
};