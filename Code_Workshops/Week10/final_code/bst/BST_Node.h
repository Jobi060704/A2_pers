
#ifndef WEEK09_BST_NODE_H
#define WEEK09_BST_NODE_H

#include <memory>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

template<typename T>
class BST_Node {
public:

   BST_Node(T data);
   BST_Node(const BST_Node& other);
   ~BST_Node();

   T   data;

   std::shared_ptr<BST_Node> left;
   std::shared_ptr<BST_Node> right;
};

template<typename T>
BST_Node<T>::BST_Node(T data) :
   data(data),
   left(nullptr),
   right(nullptr)
{
   cout << "BST_Node Create: " << data << endl;
}

template<typename T>
BST_Node<T>::BST_Node(const BST_Node& other) :
   data(other.data),
   left(other.left),
   right(other.right)
{
   cout << "BST_Node Copy: " << data << endl;
}

template<typename T>
BST_Node<T>::~BST_Node() {
   cout << "BST_Node Deconstructor: " << data << endl;
   left = nullptr;
   right = nullptr;
}

#endif // WEEK09_BST_NODE_H
