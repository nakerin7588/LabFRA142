#ifndef YO_H
#define YO_H
#include <iostream>
using namespace std;
class Node
{
private:
    int value;
    Node *next;
    Node *prev;
public:
    Node();
    ~Node();
    Node(int newValue, Node *newNext , Node *newPrev);
    int getValue();
    void setNext(Node *newNext);
    Node *getNext();
    void setPrev(Node *newPrev);
    Node *getPrev();
};
#endif