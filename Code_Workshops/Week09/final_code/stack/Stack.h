#ifndef STACK_H
#define STACK_H 

#include <deque>
/**
 * A Stack of integers
 */
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
   int top() const;

   /**
    * Add the value to the top of the Stack
    */
   void push(int value);

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
   std::deque<int> stack;
};

#endif // STACK_H
