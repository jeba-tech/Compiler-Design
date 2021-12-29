/*
 * C Program to Check if Expression is correctly Parenthesized
 */
#include <stdio.h>
#include <stdlib.h>

int top = -1; //stack empty condition
char stack[100];

// function prototypes
void push(char);
void pop();
void find_top();

int main()
{
	int i;
	char a[100];
	printf("Enter expression: ");
	gets(a);
	/// scanf("%s", &a);
	for (i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
		{
			push(a[i]);
		}
		else if (a[i] == ')')
		{
			pop();
		}
		else
        {
            continue;
        }
	}
	find_top();
	return 0;
}

// to push elements in stack
void push(char a)
{
    top++;
	stack[top] = a;
}

// to pop elements from stack
void pop()
{
	if (top == -1)
	{
		printf("\n\nExpression is invalid.\n\n");
		exit(0);
	}
	else
	{
		top--;
	}
}

// to find top element of stack
void find_top()
{
	if (top == -1)
		printf("\n\nExpression is valid.\n\n");
	else
		printf("\n\nExpression is invalid.\n\n");
}
