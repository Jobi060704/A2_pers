
#include "BST.h"

#include <iostream>
#include <string>

BST::BST() {
}

BST::~BST() {
}

void BST::clear() {
}

bool BST::contains(const int data) const {
   return false;
}


std::shared_ptr<BST_Node> BST::add(std::shared_ptr<BST_Node> node, const int data) {
   std::shared_ptr<BST_Node> retNode = nullptr;

   if(node == nullptr){
      //base case
      retNode = std::make_shared<BST_Node>(data);
   }else{
      //recursive step
      if(data < node->value){
         std::shared_ptr<BST_Node> subtree = add(node->left, data);
         node->left = subtree;
         retNode = node;
      }else{
         std::shared_ptr<BST_Node> subtree = add(node->right, data);
         node->right = subtree;
         retNode = node;
      }
   }

   return retNode;
}

void BST::add(const int data) {
   root = add(root, data);
}
