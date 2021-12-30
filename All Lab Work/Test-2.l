/*
[A-Za-z0-9]	{printf("alpha numeric\n");}
. {printf("Wrong Input\n");}

*/



/* Rules */
%%
.*abc.*	{printf("accept\n");}
.*	{printf("reject\n");}
%%

/* User defined function */
int yywrap()
{
	return 1;
}

/* Main */
int main()
{
	yylex();	
	return 0;
}