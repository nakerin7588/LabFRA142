#include "Node.h"

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int size; //ใช้เวลาหาตำแหน่ง
public:
    LinkedList();
    ~LinkedList();
    void printlist();
    void insert(Node *newNode, int pos);
    Node *remove(int pos);
};