#include "LinkedList.h"
#include <stdexcept>
#include <iostream>

#include "utils.h"


Node::Node(){
    next = nullptr;
    card = nullptr;
}

Node::~Node(){
    std::cout << "~NODE()" << std::endl;
    next = nullptr;
    card = nullptr;
}


LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(LinkedList& other){
    head = nullptr;
    for(int i = 0; i < other.size(); ++i){
        std::shared_ptr<Card> card = std::make_shared<Card>(*other.get(i));
        add_back(card);
    }
}

LinkedList::~LinkedList(){
    clear();
}

int LinkedList::size(){
    
    int length = 0;

    std::shared_ptr<Node> current = head;
    while(current != nullptr){
        ++length;
        current = current->next;
    }
    return length;
}

std::shared_ptr<Card> LinkedList::get(int index){
    std::shared_ptr<Card> retCard = nullptr;

    if(index >= 0 && index < size()){

        int counter = 0;
        std::shared_ptr<Node> current = head;

        while(counter<index){
            ++counter;
            current = current->next;
        }

        retCard = current->card;

    }
    return retCard;
}

void LinkedList::add_front(std::shared_ptr<Card> data){
    // Node* node = new Node();
    std::shared_ptr<Node> node = std::make_shared<Node>();
    node->card = data;
    node->next = head;
    head = node;
}
void LinkedList::add_back(std::shared_ptr<Card> data){
    // Node* node = new Node();
    std::shared_ptr<Node> node = std::make_shared<Node>();
    node->card = data;
    node->next = nullptr;

    if(head == nullptr){
        head = node;
    }else{
        std::shared_ptr<Node> current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = node;
    }

}

void LinkedList::remove_front(){
    if(head != nullptr){
        //std::shared_ptr<Node> toDelete = head;
        head = head->next;

        //delete toDelete->card;
        //delete toDelete;
    }else{
        throw std::runtime_error("Nothing to remove");
    }

}
void LinkedList::remove_back(){
    
    if(head != nullptr){
        std::shared_ptr<Node> current = head;
        //pre should point to node before current;
        std::shared_ptr<Node> prev = nullptr;

        while(current->next != nullptr){
            prev = current;
            current = current->next;
        }

        if(prev == nullptr){
            head = nullptr;
        }else{
            prev->next = nullptr;
        }

        //delete current->card;
        //delete current;
    }
    
}

void LinkedList::remove(int index){
    if(index >= 0 && index < size()){
        if(head != nullptr){
            int counter = 0;
            std::shared_ptr<Node> current = head;
            //pre should point to node before current;
            std::shared_ptr<Node> prev = nullptr;

            while(counter != index){
                ++counter;
                prev = current;
                current = current->next;
            }

            if(prev == nullptr){
                head = current->next;
            }else{
                prev->next = current->next;
            }

            //delete current->card;
            //delete current;

            std::cout << "Removing card:" << std::endl;
            printCard(current->card.get());

        }
    }
}

void LinkedList::clear(){
    // while(head != nullptr){
    //     remove_front();
    // }
    head = nullptr;
}
