#include <iostream>
using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}
char pop()
{
    return stack[top--];
}
bool isEmpty()
{
    return top == -1;
}
bool isMatching(char open, char close)
{
    if (open == '(' && close == ')')
        return true;
    if (open == '[' && close == ']')
        return true;
    if (open == '{' && close == '}')
        return true;
    return false;
}
int main()
{
    string expression;
    cout << "Enter expression: ";
    cin >> expression;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (isEmpty())
            {
                cout << "Not Balanced\n";
                return 0;
            }
            char topElement = pop();
            if (!isMatching(topElement, ch))
            {
                cout << "Not Balanced\n";
                return 0;
            }
        }
    }
    if (isEmpty())
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}