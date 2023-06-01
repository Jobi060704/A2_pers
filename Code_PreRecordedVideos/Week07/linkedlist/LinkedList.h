#ifndef LINKED_LIST_H
#define LINKED_LIST_H 

class Node {
public:
   Node(int value, Node* next);

   int value;
   Node* next;
};

class LinkedList {
public:
   LinkedList();
   LinkedList(LinkedList& other);
   ~LinkedList();

   /**
    * Return the current size of the Linked List.
    */
   int size();

   /**
    * Get the value at the given index.
    */
   int get(int index);

   /**
    * Add the value to the back of the Linked List
    */
   void addBack(int value);

   /**
    * Add the value to the front of the Linked List
    */
   void addFront(int value);

   /**
    * Remove the value at the back of the Linked List
    */
   void removeBack();

   /**
    * Remove the value at the front of the Linked List
    */
   void removeFront();

   /**
    * Removes all values from the Linked List
    */
   void clear();

private:

   Node* head;
};

#endif // LINKED_LIST_H
