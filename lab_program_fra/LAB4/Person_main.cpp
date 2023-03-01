#include "Person.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>
using namespace std;

int main()
{

    // add code here
    // Person firstperson("Sun",180,19);
    // firstperson.showPersonInfo();
    // cout << endl;
    // Student firststudent("EVE",200,5,73,10);
    // firststudent.showStudenInfo();
    // Teacher firstteacher("Blink",300,100,"Programming");
    // cout << endl;
    // firstteacher.showTeacherInfo();
    // firstteacher.setSubject("Mechanic");
    // cout << endl;
    // cout << firstteacher.getSubject() << endl;

    Node q = Node(1, NULL, NULL);
    Node w = Node(2, NULL, NULL);
    Node e = Node(3, NULL, NULL);

    // Stack a;
    // a.push(&q);
    // cout << a.peek() << endl;
    // a.push(&w);
    // cout << a.peek() << endl;
    // a.push(&e);
    // cout << a.peek() << endl;
    // cout << endl;
    // cout << a.pop() << endl;
    // cout << a.pop() << endl;
    // cout << a.pop() << endl;

    Queue b;
    b.enqueue(&q);
    b.enqueue(&w);
    b.enqueue(&e);
    cout << b.peek() << endl;
    cout << b.dequeue() << endl;
    cout << b.dequeue() << endl;
    cout << b.dequeue() << endl;
    return 0;
}