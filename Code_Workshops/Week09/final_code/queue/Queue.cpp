#include "Queue.h"

Queue::Queue() {
}

Queue::Queue(const Queue& other)
                    : queue(other.queue)
{
}

Queue::Queue(Queue&& other) 
                    : queue(other.queue)
{
}

Queue::~Queue() {
}

unsigned int Queue::size() const {
    return queue.size();
}

int Queue::front() const {
    return queue.front();
}

void Queue::enqueue(int value) {
    queue.push_back(value);
}

void Queue::dequeue() {
    queue.pop_front();
}

void Queue::clear() {
    queue.clear();
}