/* Decalration */
%{ 
int no_of_lines = 0;
%} 
  
/*** Rules ***/
%% 
\n      ++no_of_lines; 
end     return 0; 
%% 
  
/*** User code section***/
int yywrap()
{

} 

/*** Main ***/
int main(int argc, char **argv) 
{ 
yylex(); 
printf("The number of lines = %d\n", 
       no_of_lines ); 
  
return 0; 
}
