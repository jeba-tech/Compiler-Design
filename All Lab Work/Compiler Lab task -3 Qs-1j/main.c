
//COMPILER DESIGN SEC:F NAME:FAWJIA,JEBA ID:19-39815-1

/*Lab Task:

write a c/c++ program that can detect whether given mathematical expression is valid or not.
*/

#include<stdio.h>
#include<string.h>


int main()
{
int i,j,k,l=0,flag=0;
char exp[20];
printf("Enter the mathematical expression: \n");
scanf("%s",&exp);
k=strlen(exp);
for(i=0;i<k;i++)
{
    if(exp[i]=='(')
    flag=0;
    else if(exp[i]==')')
    flag=1;
    else if(exp[i]=='*'||exp[i]=='/'||exp[i]=='%'||exp[i]=='^')
   {
      if(exp[i-1]>96 && exp[i-1]<123 && exp[i+1]>96 && exp[i+1]<123)
      {
       }else
           break;
       }
}
if(i==k && l==0)
   printf("Valid");
else
   printf("Invalid ");
}







