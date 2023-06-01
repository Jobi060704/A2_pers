
#ifndef WEEK09_BST_H
#define WEEK09_BST_H

#include "BST_Node.h"

#include <memory>

class BST {
public:

   BST();
   ~BST();

   void clear();

   // Contract: contains function should not chage the data given to it
               // the function should not change the BST
   bool contains(const int data) const;


   // Contract: add function should not chage the data given to it
   void add(const int data);

private:
   std::shared_ptr<BST_Node> root;


   std::shared_ptr<BST_Node> add(std::shared_ptr<BST_Node> node, const int data);
};

#endif // WEEK09_BST_H
