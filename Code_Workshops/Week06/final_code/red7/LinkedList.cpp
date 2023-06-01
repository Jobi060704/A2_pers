#include "LinkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(LinkedList& other){
    
}
LinkedList::~LinkedList(){
    
}

int LinkedList::size(){
    
    int length = 0;

    Node* current = head;
    while(current != nullptr){
        ++length;
        current = current->next;
    }
    return length;
}

Card* LinkedList::get(int index){
    Card* retCard = nullptr;

    if(index >= 0 && index < size()){

        int counter = 0;
        Node* current = head;

        while(counter<index){
            ++counter;
            current = current->next;
        }

        retCard = current->card;

    }
    return retCard;
}

void LinkedList::add_front(){
    
}
void LinkedList::add_back(){
    
}

void LinkedList::remove_front(){
    
}
void LinkedList::remove_back(){
    
}
