#include "Node.h"
#include "LinkedList.h"
int main()
{
    LinkedList list;
    Node a = Node(10, NULL);
    Node b = Node(20, NULL);
    Node c = Node(30, NULL);
    a.print();
    b.print();
    c.print();
    cout << "XXX" << endl;
    list.insert(&a,0);
    list.insert(&b,1);
    list.insert(&c,2);
    list.printlist();
    Node *d = list.remove(-5);
    list.printlist();
    cout << d->getValue() << endl;
}