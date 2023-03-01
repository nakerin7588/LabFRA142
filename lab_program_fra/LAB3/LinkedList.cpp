#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
    size = 0;
}

LinkedList::~LinkedList()
{
}

void LinkedList::printlist()
{
    Node *current = head;
    if (size == 0)
    {
        cout << " Empty list " << endl;
    }
    else
    {
        while (current != NULL)
        {
            cout << current->getValue();
            cout << " -> ";
            current = current->getNext();
        }
        cout << "NULL" << endl;
    }
}

void LinkedList::insert(Node *newNode, int pos)
{
    // 1. newNode -> nextNode
    // 2. previousNode -> newNode
    if (pos < 0 || pos > size)
    {
        cout << "Error" << endl;
        return;
    }
    if (pos == 0 && size == 0)
    {
        head = newNode;
        tail = newNode;
        tail->setNext(NULL);
    }
    else if (pos == 0 && size > 0)
    {
        newNode->setNext(head);
        head = newNode;
    }
    else if (pos == size)
    {
        newNode->setNext(NULL);
        tail->setNext(newNode);
        tail = newNode;
    }
    else
    {
        Node *current = head;
        int temp = 0;
        while (temp < pos - 1)
        {
            current = current->getNext();
            temp++;
        }
        newNode->setNext(current->getNext());
        current->setNext(newNode);
    }
    size++;
}

Node *LinkedList::remove(int pos)
{
    if (pos < 0 || pos >= size)
    {
        cout << "Error" << endl;
        return NULL;
    }
    else if (size == 0)
    {
        cout << "Error" << endl;
        return NULL;
    }
    if (pos == 0)
    {
        Node *remove = head;
        head = head->getNext();
        size--;
        return remove;
    }
    else if (pos == size - 1)
    {
        Node *temp = head;
        while (temp->getNext()->getNext() != NULL)
        {
            temp = temp->getNext();
        }
        Node *remove = temp->getNext();
        temp->setNext(NULL);
        tail = temp;
        return remove;
    }
    else
    {
        Node *prev = NULL;
        Node *remove = head;
        int temp = 0;
        while (temp < pos)
        {
            prev = remove;
            remove = remove->getNext();
            temp++;
        }
        prev->setNext(remove->getNext());
        remove->setNext(NULL);
        size--;
        return remove;
    }
}
