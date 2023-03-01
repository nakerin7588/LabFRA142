#include "Node.h"

Node::Node()
{
    value = 0;
    next = NULL;
    prev = NULL;
}

Node::~Node()
{
}

Node::Node(int newValue, Node *newNext, Node *newPrev)
{
    value = newValue;
    next = newNext;
    prev = newPrev;
}

int Node::getValue()
{
    return value;
}

void Node::setNext(Node *newNext)
{
    next = newNext;
}

Node *Node::getNext()
{
    return next;
}

void Node::setPrev(Node *newPrev)
{
    prev = newPrev;
}

Node *Node::getPrev()
{
    return prev;
}