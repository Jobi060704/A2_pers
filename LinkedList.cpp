#include "LinkedList.h"

LinkedList::LinkedList() {
   head = nullptr;
   end = nullptr;
   count = 0;
}

LinkedList::~LinkedList() {
	// deletes the linked list
    Node* current = head;
    while(current != nullptr) {
        Node* temp = current->next;
        delete current;
        current = temp;
    }

}

// adds new nodes to the linked list in a sorted manner
void LinkedList::addSorted(Stock* stock) {
    // if the the list is empty
	if (count == 0) {
		head = new Node();
		head->data = stock;
		end = head;
		count = 1;
	}
    // if there are elements/nodes in the list
	else {
		if (stock->id.compare(head->data->id) < 0) {
			Node* newNode = new Node();
			newNode->data = stock;
			newNode->next = head;
			end = head->next;
			head = newNode;
			count++;
		}
		else {
			Node* current = head;
			bool inserted = false;
			while(!inserted) {
				if (current->next == nullptr) {
					Node* newNode = new Node();
					newNode->data = stock;
					current->next = newNode;
					end = newNode;
					count++;
					inserted = true;
				}
				else {
					if (stock->id.compare(current->next->data->id) < 0) {
						Node* newNode = new Node();
						newNode->data = stock;
						newNode->next = current->next;
						current->next = newNode;
						end = newNode;
						count++;
						inserted = true;
					}
				}
				current = current->next;
			}
		}
	}
}

// returns the head of the linked list
Node* LinkedList::getHead() {
    return head;
}

// returns the end of the linked list
Node* LinkedList::getEnd() {
    return end;
}


// removes the node of the specified id
Node* LinkedList::removeById(std::string id) {
    Node* result = nullptr;

    if (head == nullptr) {
        result = nullptr;
    }

    if (id == head->data->id) {
        result = head;
        head = head->next;
    }
    else {
        Node* current = head;
        while (current->next != nullptr) {
            if (id == current->next->data->id) {
                result = current->next;
                current->next = current->next->next;
            }
            current = current->next;
        }
		end = current;
    }
    return result;

}