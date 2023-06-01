
#include "BST_Node.h"

#include <iostream>

using std::string;
using std::cout;
using std::endl;

BST_Node::BST_Node(int data) :
   data(data),
   left(nullptr),
   right(nullptr)
{
   cout << "BST_Node Create: " << data << endl;
}

BST_Node::BST_Node(const BST_Node& other) :
   data(other.data),
   left(other.left),
   right(other.right)
{
   cout << "BST_Node Copy: " << data << endl;
}

BST_Node::~BST_Node() {
   cout << "BST_Node Deconstructor: " << data << endl;
   left = nullptr;
   right = nullptr;
}
