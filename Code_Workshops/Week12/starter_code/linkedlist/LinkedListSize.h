#ifndef LINKED_LIST_SIZE_H
#define LINKED_LIST_SIZE_H 

#include "LinkedList.h"

class LinkedListSize : public LinkedList{
public:
   LinkedListSize();
   LinkedListSize(const LinkedListSize& other);
   virtual ~LinkedListSize();

   /**
    * Return the current size of the Linked List.
    */
   virtual unsigned int size() const;

   /**
    * Add the value to the back of the Linked List
    */
   virtual void addBack(int value);

   /**
    * Add the value to the front of the Linked List
    */
   virtual void addFront(int value);

   /**
    * Remove the value at the back of the Linked List
    */
   // Contract: There should be nodes to remove
   virtual void removeBack();

   /**
    * Remove the value at the front of the Linked List
    */
   // Contract: There should be nodes to remove
   virtual void removeFront();


private:

   int length;
};

#endif // LINKED_LIST_H
