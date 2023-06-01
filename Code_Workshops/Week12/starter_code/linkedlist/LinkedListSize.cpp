
#include "LinkedListSize.h"

#include <exception>
#include <iostream>
#include <fstream>
#include <limits>


LinkedListSize::LinkedListSize():
                  LinkedList()
{
   length = 0;
}

LinkedListSize::LinkedListSize(const LinkedListSize& other) :
                  LinkedList(other),
                  length(other.length)
{
   // TODO
}

LinkedListSize::~LinkedListSize() {
   
}

unsigned int LinkedListSize::size() const {
   // std::cout << "LinkedListSize::size()" << std::endl;
   return length;
}

void LinkedListSize::addFront(int value) {
   LinkedList::addFront(value);
   ++length;
}

void LinkedListSize::addBack(int value) {
   LinkedList::addBack(value);
   ++length;
}

void LinkedListSize::removeBack() {
   LinkedList::removeBack();
   --length;
}

void LinkedListSize::removeFront() {
   LinkedList::removeFront();
   --length;
}
