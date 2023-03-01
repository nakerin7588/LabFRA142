#include "Node.h"

Node::Node()
: value(0),next(NULL)
{
    // nothing ..
}

Node::~Node()
{
}

Node::Node(int newValue, Node *newNext)
{
    value = newValue;
    next = newNext;
}

void Node::print()
{
    cout << value << endl;
}

void Node::setValue(int newValue)
{
    value = newValue;
}

int Node::getValue()
{
    return value;
}

Node *Node::getNext()
{
    return next;
}

void Node::setNext(Node *newNext)
{
    next = newNext;
}
