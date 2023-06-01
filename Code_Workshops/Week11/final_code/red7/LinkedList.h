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

    void add_front(Card* data);
    void add_back(Card* data);

    //Contract: Elements should exist in the list to be deleted.
    void remove_front();
    void remove_back();

    void remove(int index);

    void clear();

private:

    Node* head;
    
};


#endif //LINKEDLIST