#include "Queue.h"

Queue::Queue() : LinkedList()
{
}

Queue::~Queue()
{
}

void Queue::enqueue(Node *element)
{
    insert(element,getSize());
}

int Queue::dequeue()
{
    return remove(0)->getValue();
}

int Queue::peek()
{
    return getHead()->getValue();
}
