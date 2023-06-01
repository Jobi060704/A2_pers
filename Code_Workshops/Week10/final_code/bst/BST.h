
#ifndef WEEK09_BST_H
#define WEEK09_BST_H

#include "BST_Node.h"
#include "Card.h"

#include <memory>
#include <iostream>
#include <string>


template<typename T>
class BST {
public:

   BST();
   ~BST();

   void clear();

   // Contract: contains function should not chage the data given to it
               // the function should not change the BST
   bool contains(const T data) const;


   // Contract: add function should not chage the data given to it
   void add(const T data);

   void dfs() const;

private:
   std::shared_ptr<BST_Node<T>> root;


   std::shared_ptr<BST_Node<T>> add(std::shared_ptr<BST_Node<T>> node, const T data);
   bool contains(std::shared_ptr<BST_Node<T>> node, const T data) const;
   void dfs(std::shared_ptr<BST_Node<T>> node) const;
};


void printData(Card* card){
   std::cout   << "( " << card->getColour() 
               << ", " << card->getNumber() << " )" << std::endl;
}

bool lessThan(Card* card1, Card* card2){
   return card1->getColour() < card2->getColour() &&
            card1->getNumber() < card2->getNumber();
}

template<typename T>
BST<T>::BST() {
}

template<typename T>
BST<T>::~BST() {
}

template<typename T>
void BST<T>::clear() {
}

template<typename T>
bool BST<T>::contains(std::shared_ptr<BST_Node<T>> node, const T data) const {
   bool retValue = false;

   if(node == nullptr){
      //base case 1
      retValue = false;
   }else if (node->data == data){
      retValue = true;
   }else{
      //recursive step
      if(lessThan(data, node->data)){
         retValue = contains(node->left, data);
      }else{
         retValue = contains(node->right, data);
      }
   }
   
   
   return retValue;
}

template<typename T>
bool BST<T>::contains(const T data) const {
   return contains(root, data);
}

template<typename T>
std::shared_ptr<BST_Node<T>> BST<T>::add(std::shared_ptr<BST_Node<T>> node, const T data) {
   std::shared_ptr<BST_Node<T>> retNode = nullptr;

   if(node == nullptr){
      //base case
      std::cout << "Made new node: " << data << std::endl;
      retNode = std::make_shared<BST_Node<T>>(data);
   }else{
      //recursive step
      if(lessThan(data, node->data)){
         std::cout << "\tAdd node: " << data << " left of : " << node->data << std::endl;
         std::shared_ptr<BST_Node<T>> subtree = add(node->left, data);
         node->left = subtree;
         retNode = node;
      }else{
         std::cout << "\tAdd node: " << data << " right of : " << node->data << std::endl;
         std::shared_ptr<BST_Node<T>> subtree = add(node->right, data);
         node->right = subtree;
         retNode = node;
      }
   }

   return retNode;
}

template<typename T>
void BST<T>::add(const T data) {
   root = add(root, data);
}


template<typename T>
void BST<T>::dfs(std::shared_ptr<BST_Node<T>> node) const{
   if(node != nullptr){
      //recursive step
      //go left
      dfs(node->left);
      // process current node
      std::cout << " ";
      printData(node->data);

      //go right
      dfs(node->right);
   }
}

template<typename T>
void BST<T>::dfs() const{
   dfs(root);
}

#endif // WEEK09_BST_H
