#ifndef STACK_H
#define STACK_H 

#include <vector>
/**
 * A Stack of integers
 */
template<typename T>
class Stack {
public:
   Stack();
   Stack(const Stack& other);
   Stack(Stack&& other);
   ~Stack();

   /**
    * Return the current size of the Stack.
    */
   unsigned int size() const;

   /**
    * Get the top element of the Stack
    */
   T top() const;

   /**
    * Add the value to the top of the Stack
    */
   void push(T value);

   /**
    * Remove the element from the top of the Stack
    */
   void pop();

   /**
    * Removes all elements from the Stack
    */
   void clear();

private:
   // Choose an underlying representation
   std::vector<T> stack;

};


template<typename T>
Stack<T>::Stack() {
}

template<typename T>
Stack<T>::Stack(const Stack& other) 
                    :stack(other.stack)
{
}

template<typename T>
Stack<T>::Stack(Stack&& other) 
                    :stack(other.stack)
{
}

template<typename T>
Stack<T>::~Stack() {
    clear();
}

/**
 * Return the current size of the Stack.
 */
template<typename T>
unsigned int Stack<T>::size() const {
    return stack.size();
}

/**
 * Get the top element of the Stack
 */
template<typename T>
T Stack<T>::top() const {
    return stack.back();
}

/**
 * Add the value to the top of the Stack
 */
template<typename T>
void Stack<T>::push(T value) {
    stack.push_back(value);
}

/**
 * Remove the element from the top of the Stack
 */
template<typename T>
void Stack<T>::pop() {
    stack.pop_back();
}

/**
 * Removes all elements from the Stack
 */
template<typename T>
void Stack<T>::clear() {
    stack.clear();
}



#endif // STACK_H
