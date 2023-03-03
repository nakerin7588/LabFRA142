#include "Person.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>
using namespace std;

int main()
{

    // add code here
    // Person firstperson;
    // firstperson.name = "Sun";
    // firstperson.age = 19;
    // firstperson.height = 100;
    // firstperson.showPersonInfo();
    // cout << endl;
    // Student firststudent("EVE", 200, 5, 73, 10);
    // firststudent.showStudenInfo();
    // Teacher firstteacher("Fibo", 300, 100, "Programming");
    // cout << endl;
    // firstteacher.showTeacherInfo();
    // firstteacher.setSubject("Mechanic");
    // cout << endl;
    // cout << firstteacher.getSubject() << endl;

    // Node q = Node(1, NULL, NULL);
    // Node w = Node(2, NULL, NULL);
    // Node e = Node(3, NULL, NULL);

    // Stack a;
    // a.push(&q);
    // cout << a.peek() << endl;
    // a.push(&w);
    // cout << a.peek() << endl;
    // a.push(&e);
    // cout << a.peek() << endl;
    // cout << endl;
    // cout << "POP:" << a.pop() << endl;
    // cout << a.peek() << endl;
    // cout << "POP:" << a.pop() << endl;
    // cout << a.peek() << endl;
    // cout << "POP:" << a.pop() << endl;
    // cout << a.peek() << endl;
    // cout << endl;

    // Queue b;
    // b.enqueue(&q);
    // // cout << b.peek() << endl;
    // b.enqueue(&w);
    // // cout << b.peek() << endl;
    // b.enqueue(&e);
    // // cout << b.peek() << endl;
    // cout << endl;
    // cout << "Dequeue:" << b.dequeue() << endl;
    // cout << b.peek() << endl;
    // cout << "Dequeue:" << b.dequeue() << endl;
    // cout << b.peek() << endl;
    // cout << "Dequeue:" << b.dequeue() << endl;
    // cout << b.peek() << endl;

    // post lab

    Stack stack_card;
    // int card_array[9] = {1,5,0,3,9,4,2,7,6};
    int card_array_int[6] = {1, 2, 3, 0, 4, 5};
    Node card_array_int_node[6];
    for (int i = 0; i < size(card_array_int); i++)
    {
        card_array_int_node[i] = Node(card_array_int[i],NULL,NULL);
    }
    // for (int i = 0; i < size(card_array_int); i++)
    // {
    //     cout << card_array_int_node[i].getValue() << endl; 
    // }
    
    // Node card_array[6] = {Node(1, NULL, NULL), Node(2, NULL, NULL), Node(3, NULL, NULL), Node(0, NULL, NULL), Node(4, NULL, NULL), Node(5, NULL, NULL)};
    for (int i = 0; i < size(card_array_int_node); i++)
    {
        if (card_array_int_node[i].getValue() == 0)
        {
            Node *temp = stack_card.peek();
            stack_card.pop();
            stack_card.push(&card_array_int_node[i]);
            stack_card.push(temp);
        }
        else
        {
            stack_card.push(&card_array_int_node[i]);
        }
    }
    for (int i = 0; i < size(card_array_int_node); i++)
    {
        cout << stack_card.pop() << endl;
    }
    return 0;
}
