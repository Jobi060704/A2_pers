#ifndef LINKEDLIST
#define LINKEDLIST

#include "Card.h"
#include <memory>

class Node{
public:

    Node();
    ~Node();


    std::shared_ptr<Card> card;
    std::shared_ptr<Node> next; 
};

class LinkedList{
public:
    LinkedList();
    LinkedList(LinkedList& other);
    ~LinkedList();

    int size();

    std::shared_ptr<Card> get(int index);

    void add_front(std::shared_ptr<Card> data);
    void add_back(std::shared_ptr<Card> data);

    //Contract: Elements should exist in the list to be deleted.
    void remove_front();
    void remove_back();

    void remove(int index);

    void clear();

private:

    std::shared_ptr<Node> head;
    
};


#endif //LINKEDLIST