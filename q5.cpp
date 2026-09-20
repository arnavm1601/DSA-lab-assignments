#include <iostream>
using namespace std;

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    stack[++top] = value;
}
int pop()
{
    return stack[top--];
}
int main()
{
    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;
    for (int i = 0; i < postfix.length(); i++)
    {
        char ch = postfix[i];
        if (isdigit(ch))
        {
            push(ch - '0');
        }
        else
        {
            int b = pop();
            int a = pop();
            int result;
            switch (ch)
            {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                result = a / b;
                break;
            case '%':
                result = a % b;
                break;
            }
            push(result);
        }
    }
    cout << "Result = " << pop() << endl;
    return 0;
}