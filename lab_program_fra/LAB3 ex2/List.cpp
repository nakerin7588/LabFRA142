#include "List.h"

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
    size = 0;
}

void LinkedList::insert(Node *newNode, int pos)
{
    if (pos < 0 || pos > size)
    {
        cout << "ERROR: " << endl;
        return;
    }
    if (pos == 0 && size == 0)
    {
        head = newNode;
        tail = newNode;
        head->setPrev(NULL);
        head->setNext(NULL);
        tail->setPrev(NULL);
        tail->setNext(NULL);
    }
    else if (pos == 0 && size > 0)
    {
        newNode->setNext(head);
        newNode->setPrev(NULL);
        head = newNode;
    }
    else if (pos == size)
    {
        newNode->setNext(NULL);
        newNode->setPrev(tail);
        tail->setNext(newNode);
        tail = newNode;
    }
    else
    {
        Node *prev = NULL;
        Node *current = head;
        int temp = 0;
        while (temp < pos)
        {
            prev = current;
            current = current->getNext();
            temp++;
        }
        newNode->setNext(current);
        current->setPrev(newNode);
        prev->setNext(newNode);
        newNode->setPrev(prev);
    }
    size++;
}

Node *LinkedList::remove(int pos)
{
    if (pos < 0 || pos > size)
    {
        return NULL;
    }
    else if (size == 0)
    {
        cout << "remove empty list" << endl;
        return NULL;
    }
    else if (pos == 0)
    {
        Node *remove = head;
        head = head->getNext();
        head->setPrev(NULL);
        remove->setNext(NULL);
        size--;
        return remove;
    }
    else if (pos == size-1)
    {
        Node *remove = tail;
        tail = tail->getPrev();
        tail->setNext(NULL);
        remove->setPrev(NULL);
        size--;
        return remove;
    }
    else
    {
        int temp = 0;
        Node *remove = head;
        Node *prev = NULL;
        while (temp < pos)
        {
            prev = remove;
            remove = remove->getNext();
            temp++;
        }
        prev->setNext(remove->getNext());
        remove->getNext()->setPrev(prev);
        size--;
        return remove;
    }
}

void LinkedList::printlist()
{
    if (size == 0)
    {
        cout << "Empty list" << endl;
    }
    else
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->getValue() << " -> ";
            current = current->getNext();
        }
        cout << "NULL" << endl;
    }
}
