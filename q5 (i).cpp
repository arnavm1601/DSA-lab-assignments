#include <iostream>
using namespace std;

#define MAX 100

int q1[MAX], q2[MAX];

int front1 = 0, rear1 = -1;
int front2 = 0, rear2 = -1;

void enqueue1(int x)
{
    q1[++rear1] = x;
}
int dequeue1()
{
    return q1[front1++];
}
void enqueue2(int x)
{
    q2[++rear2] = x;
}
int dequeue2()
{
    return q2[front2++];
}
bool isEmpty1()
{
    return front1 > rear1;
}
void push(int x)
{
    enqueue2(x);
    while (!isEmpty1())
    {
        enqueue2(dequeue1());
    }
    front1 = 0;
    rear1 = -1;
    while (front2 <= rear2)
    {
        q1[++rear1] = q2[front2++];
    }
    front2 = 0;
    rear2 = -1;
}
void pop()
{
    if (isEmpty1())
    {
        cout << "Stack Underflow\n";
        return;
    }

    cout << "Popped: " << dequeue1() << endl;
}
void peek()
{
    if (isEmpty1())
    {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Top: " << q1[front1] << endl;
}
void display()
{
    if (isEmpty1())
    {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Stack: ";
    for (int i = front1; i <= rear1; i++)
    {
        cout << q1[i] << " ";
    }
    cout << endl;
}
int main()
{
    int choice, value;
    do
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 5);
    return 0;
}