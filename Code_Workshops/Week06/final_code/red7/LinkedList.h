#ifndef LINKEDLIST
#define LINKEDLIST

#include "Card.h"

class Node{
public:
    Card* card;
    Node* next;
};

class LinkedList{
public:
    LinkedList();
    LinkedList(LinkedList& other);
    ~LinkedList();

    int size();

    Card* get(int index);

    void add_front();
    void add_back();

    void remove_front();
    void remove_back();

private:

    Node* head;
    
};


#endif //LINKEDLIST