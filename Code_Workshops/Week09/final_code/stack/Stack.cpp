#include "Stack.h"


Stack::Stack() {
}

Stack::Stack(const Stack& other) 
                        : stack(other.stack)
{
}

Stack::Stack(Stack&& other) 
                        : stack(other.stack)
{
}

Stack::~Stack() {
}

/**
 * Return the current size of the Stack.
 */
unsigned int Stack::size() const {
    return stack.size();
}

/**
 * Get the top element of the Stack
 */
int Stack::top() const {
    return stack.front();
}

/**
 * Add the value to the top of the Stack
 */
void Stack::push(int value) {
    stack.push_front(value);
}

/**
 * Remove the element from the top of the Stack
 */
void Stack::pop() {
    stack.pop_front();
}

/**
 * Removes all elements from the Stack
 */
void Stack::clear() {
    stack.clear();
}

