/*
 * C Program to Check if Expression is correctly Parenthesized
 */
#include <stdio.h>

int main()
{
	int i, counter = 0;
	char a[100];
	printf("Enter expression: ");
	gets(a);
	/// scanf("%s", &a);
	for (i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
		{
		    counter++;
		}
		else if (a[i] == ')')
		{
		    if(counter == 0)
            {
                printf("\n\nExpression is invalid.\n\n");
                return 0;
            }
            else
            {
                counter--;
            }
		}
		else
        {
            continue;
        }
	}

    if(counter == 0)
    {
        printf("\n\nExpression is valid.\n\n");
    }
    else
    {
        printf("\n\nExpression is invalid.\n\n");
    }
    return 0;
}
