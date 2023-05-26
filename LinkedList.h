#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"


class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    // more functions to be added perhaps...

    // adds new nodes in a sorted manner
    void addSorted(Stock* stock);
    // returns the head
    Node* getHead();
    // returns the end
    Node* getEnd();
    // removes the node based on given id
    Node* removeById(std::string id);

private:
    // the beginning of the list
    Node* head;
    // the end of the list
    Node* end;
    // how many nodes are there in the list?
    unsigned count;
};

#endif  // LINKEDLIST_H


