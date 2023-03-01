#include "Yo.h"
#include "List.h"

int main()
{
    Node a = Node(0, NULL, NULL);
    Node b = Node(1, NULL, NULL);
    Node c = Node(2, NULL, NULL);
    LinkedList l;
    l.insert(&a,0);
    l.insert(&b,1);
    l.insert(&c,1);
    l.printlist();
    l.printlist();
    cout << l.remove(0)->getValue() << endl;
    cout << l.remove(0)->getValue() << endl;
    cout << l.remove(0)->getValue() << endl;
}