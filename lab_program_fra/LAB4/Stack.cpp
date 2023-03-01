#include "Stack.h"
Stack::Stack() : LinkedList()
{
}

Stack::~Stack()
{
}

void Stack::push(Node *element)
{
    insert(element, 0);
}

int Stack::pop()
{

    return remove(0)->getValue();
}

int Stack::peek()
{
    return getHead()->getValue();
}