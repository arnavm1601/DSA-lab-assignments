#include <iostream>
using namespace std;

#define MAX 100

int q[MAX];
int front = 0;
int rear = -1;
int size = 0;

void enqueue(int x)
{
    rear = (rear + 1) % MAX;
    q[rear] = x;
    size++;
}
int dequeue()
{
    int x = q[front];
    front = (front + 1) % MAX;
    size--;
    return x;
}
void push(int x)
{
    enqueue(x);
    int oldSize = size - 1;
    for (int i = 0; i < oldSize; i++)
    {
        enqueue(dequeue());
    }
}
void pop()
{
    if (size == 0)
    {
        cout << "Stack Underflow\n";
        return;
    }
    cout << "Popped: " << dequeue() << endl;
}
void peek()
{
    if (size == 0)
    {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Top: " << q[front] << endl;
}
void display()
{
    if (size == 0)
    {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Stack: ";
    for (int i = 0; i < size; i++)
    {
        cout << q[(front + i) % MAX] << " ";
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