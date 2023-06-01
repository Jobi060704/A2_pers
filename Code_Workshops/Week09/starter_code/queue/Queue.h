#ifndef QUEUE_H
#define QUEUE_H 

/**
 * A Queue of integers
 */
class Queue {
public:
   Queue();
   Queue(const Queue& other);
   Queue(Queue&& other);
   ~Queue();

   /**
    * Return the current size of the Queue.
    */
   unsigned int size() const;

   /**
    * Get the front element of the Queue
    */
   int front() const;

   /**
    * Add the value to the back of the Queue
    */
   void enqueue(int value);

   /**
    * Remove the element from the front of the Queue
    */
   void dequeue();

   /**
    * Removes all elements from the Queue
    */
   void clear();

private:
   // Choose an underlying representation
};

#endif // QUEUE_H
