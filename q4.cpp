#include <iostream>
using namespace std;
#define max 5
char st[max];
int top = -1;

void push(char ch)
{
    if (top == max - 1)
    {
        cout << "overrflow\n";
        return;
    }
    top++;
    st[top] = ch;
}
char pop()
{
    return st[top--];
}
char peek()
{
    return st[top];
}
bool isEmpty()
{
    return top == -1;
}
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return 0;
}
int main()
{
    string infix, postfix = "";
    cout << "Enter infix: ";
    cin >> infix;
    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];
        if (isalnum(ch))
            postfix += ch;
        else if (ch == '(')
            push(ch);
        else if (ch == ')')
        {
            while (!isEmpty() && peek() != '(')
            {
                postfix += pop();
            }
            if (!isEmpty())
                pop();
        }
        else
        {
            while (!isEmpty() && peek() != '(' &&
                   precedence(peek()) >= precedence(ch))
            {
                postfix += pop();
            }
            push(ch);
        }
    }
    while (!isEmpty())
    {
        postfix += pop();
    }
    cout << postfix << endl;

    return 0;
}