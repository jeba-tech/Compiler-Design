
//COMPILER DESIGN SEC:F NAME:FAWJIA,JEBA ID:19-39815-1
/*1. Write a C/C++ program that can read program from a file and detect all the tokens (e.g. valid or
invalid identifier, keyword, operator) from the file.*/



#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Returns 'true' if the character is a DELIMITER.
bool Delimiter(char ch)
{
     if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return (true);
    return (false);
}


// Returns 'true' if the character is an OPERATOR.
bool Operator(char ch)
{
    if (ch == '+' ||
        ch == '=')
        return (true);
    return (false);
}

// Returns 'true' if the string is a KEYWORD.
bool Keyword(char* str)
{
    if (
         !strcmp(str, "int")
        || !strcmp(str, "double")
        )
        return (true);
    return (false);
}


// Returns 'true' if the string is a VALID IDENTIFIER.
bool Identifier(char* str)
{
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || Delimiter(str[0]) == true)
        return (false);
    return (true);
}

// Extracts the SUBSTRING.
char* subString(char* str, int left, int right)
{
    int i;
    char* subStr = (char*)malloc(
                  sizeof(char) * (right - left + 2));

    for (i = left; i <= right; i++)
        subStr[i - left] = str[i];
    subStr[right - left + 1] = '\0';
    return (subStr);
}


//for input string
void get(char* str)
{
    int left = 0, right = 0;
    int len = strlen(str);

    while (right <= len && left <= right) {
        if (Delimiter(str[right]) == false)
            right++;

        if (Delimiter(str[right]) == true && left == right) {
            if (Operator(str[right]) == true)
                printf("%c      Operator\n", str[right]);

            right++;
            left = right;
        }
        else if (Delimiter(str[right]) == true && left != right
                   || (right == len && left != right))
        {
            char* subStr = subString(str, left, right - 1);

            if (Keyword(subStr) == true)
                printf("%s     Keyword\n", subStr);

            else if (Identifier(subStr) == true
                     && Delimiter(str[right - 1]) == false)
                printf("%s      Identifier\n", subStr);

            else if (Identifier(subStr) == false
                     && Delimiter(str[right - 1]) == false)
                printf("%s     Invalid identifier\n", subStr);
            left = right;
        }
    }
    return;
}
int main()
{



         FILE *fp ;


         char str[1000];

          get(str); // calling the parse function


         printf( "Opening the file Jeba test.txt in read mode" ) ;
         fp = fopen( "Jeba test.txt", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file Jeba test.txt" ) ;
                 return 1;
         }
         printf( "Reading the file Jeba test.txt\n" ) ;
         while( fgets ( str, 50, fp ) != NULL )
            printf( "%s" , str ) ;
         printf("Closing the file Jeba test.txt") ;
         fclose(fp) ;



    return 0;
}



