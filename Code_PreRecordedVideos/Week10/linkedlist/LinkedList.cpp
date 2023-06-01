
#include "LinkedList.h"

#include <exception>
#include <iostream>
#include <fstream>
#include <limits>

Node::Node(int value, Node* next) :
   value(value),
   next(next)
{}

LinkedList::LinkedList() 
{
   head = nullptr;
}

LinkedList::LinkedList(const LinkedList& other) 
{
   // TODO
}

LinkedList::~LinkedList() {
   clear();
}

unsigned int LinkedList::size() const {
   unsigned int count = 0;
   Node* current = head;
   while(current != nullptr) {
      ++count;
      current = current->next;
   }

   return count;
}

int LinkedList::get(const unsigned int index) const {
   int count = 0;
   Node* current = head;
   int returnValue = 0;
   if (index < size()) {
      while(count < index) {
         ++count;
         current = current->next;
      }
      returnValue = current->value;
   } else {
      throw std::out_of_range("Linked List get - index out of range");
   }
   
   return returnValue;
}

void LinkedList::addFront(int value) {
   // TODO
}

void LinkedList::addBack(int value) {
   Node* toAdd = new Node(value, nullptr);

   if (head == nullptr) {
      head = toAdd;
   } else {
      Node* current = head;
      while(current->next != nullptr) {
         current = current->next;
      }

      current->next = toAdd;
   }
}

void LinkedList::removeBack() {
   // TODO
}

void LinkedList::removeFront() {
   Node* current = head->next;
   delete head;
   head = current;
}

void LinkedList::clear() {
   while (head != nullptr) {
      removeFront();
   }
}

