/*
. {printf("any character\n");} 
[a-zA-Z]+	{return 0;}
*/

%%
[-][0-9]+	{printf("negative integer\n");}
[+]?[0-9]+	{printf("positive integer\n");}
[a-zA-Z]+	{return 0;}
%%

int yywrap()
{
	/* return 1; */
}

int main()
{
	printf("positive and negative integer recognition\n");
	yylex();
	return 0;
}