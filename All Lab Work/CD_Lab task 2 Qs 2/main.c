
//COMPILER DESIGN SEC:F NAME:FAWJIA,JEBA ID:19-39815-1
/*2. Write a C/C++ program to check if expression is correctly parenthesized or not.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];

// function prototypes
void push(char);
void pop();
void in_top();



// to push elements in stack
void push(char a)
{
	stack[top] = a;
	top++;
}

// to pop elements from stack
void pop()
{
	if (top == -1)
	{
		printf("expression is invalid\n");
		exit(0);
	}
	else
	{
		top--;
	}
}

// to find top element of stack
void in_top()
{
	if (top == -1)
		printf("\nexpression is valid\n");
	else
		printf("\nexpression is invalid\n");
}

void main()
{
	int i;
	char a[100];
	printf("enter expression\n");
	scanf("%s", &a);
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
	}
	in_top();
}
