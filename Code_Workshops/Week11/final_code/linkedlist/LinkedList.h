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
   LinkedList(const LinkedList& other);
   virtual ~LinkedList();

   /**
    * Return the current size of the Linked List.
    */
   virtual unsigned int size() const;

   /**
    * output: Get the value at the given index.
    * input: Index must be >=0 and < size()
    * 
    */
   virtual int get(const unsigned int index) const;

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
   virtual void removeBack();

   /**
    * Remove the value at the front of the Linked List
    */
   virtual void removeFront();

   /**
    * Removes all values from the Linked List
    */
   virtual void clear();

private:

   Node* head;
};

#endif // LINKED_LIST_H
