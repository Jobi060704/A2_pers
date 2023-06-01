#include "LinkedList.h"
#include <stdexcept>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(LinkedList& other){
    head = nullptr;
    for(int i = 0; i < other.size(); ++i){
        Card* card = new Card(*other.get(i));
        add_back(card);
    }
}
LinkedList::~LinkedList(){
    clear();
}

// int LinkedList::size(){
    
//     int length = 0;

//     Node* current = head;
//     while(current != nullptr){
//         ++length;
//         current = current->next;
//     }
//     return length;
// }

int LinkedList::size(Node* node){
   int retVal = 0;

   if(node == nullptr){
       //base case
       retVal = 0;
   }else{
       // recursive step
       retVal = 1 + size(node->next);
   }

   return retVal;
}


int LinkedList::size(){
   return size(head);
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

void LinkedList::add_front(Card* data){
    Node* node = new Node();
    node->card = data;
    node->next = head;
    head = node;
}
// void LinkedList::add_back(Card* data){
//     Node* node = new Node();
//     node->card = data;
//     node->next = nullptr;

//     if(head == nullptr){
//         head = node;
//     }else{
//         Node* current = head;
//         while(current->next != nullptr){
//             current = current->next;
//         }
//         current->next = node;
//     }

// }

Node* LinkedList::add_back(Node* node, Card* data){
    Node* retNode = nullptr;

    if(node == nullptr){
        retNode = new Node();
        retNode->card = data;
        retNode->next = nullptr;
    }else{
        //recursive step
        Node* tmp = add_back(node->next, data);
        node->next = tmp;
        retNode = node;
    }


    return retNode;
}

void LinkedList::add_back(Card* data){
    head = add_back(head, data);
}


void LinkedList::remove_front(){
    if(head != nullptr){
        Node* toDelete = head;
        head = head->next;

        delete toDelete->card;
        delete toDelete;
    }else{
        throw std::runtime_error("Nothing to remove");
    }

}
void LinkedList::remove_back(){
    
    if(head != nullptr){
        Node* current = head;
        //pre should point to node before current;
        Node* prev = nullptr;

        while(current->next != nullptr){
            prev = current;
            current = current->next;
        }

        if(prev == nullptr){
            head = nullptr;
        }else{
            prev->next = nullptr;
        }

        delete current->card;
        delete current;
    }
    
}

void LinkedList::remove(int index){
    if(index >= 0 && index < size()){
        if(head != nullptr){
            int counter = 0;
            Node* current = head;
            //pre should point to node before current;
            Node* prev = nullptr;

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

            delete current->card;
            delete current;
        }
    }
}

void LinkedList::clear(){
    while(head != nullptr){
        remove_front();
    }
}
