#include <stdio.h>
#include <string.h>
#define max 100

//this is comment
/* this is a comment
mutliple line
*/

int main ()
{
    int a,b,l;
    char arr[max];

    char str[2];
    printf("Enter something: ");
    scanf("%s",arr);
    l = arr.length();

    strncpy(str,arr,2);
    if ((a=strncmp(str,"//",2))  || ((b=strncmp(str,"/*",2)) && arr[l-2]=='*' && arr[l-1]=='/'))
        printf("It is a Comment\n");
    else
        printf("It is not a Comment\n");

    return 0;

}
