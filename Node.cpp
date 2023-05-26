#include "Node.h"

Node::Node(){
    data = nullptr;
    next = nullptr;
    prev = nullptr;
};
Node::~Node(){
    delete data;
};