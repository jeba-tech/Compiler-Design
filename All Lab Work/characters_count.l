/* Decalration */
%{ 
int no_of_chars = 0; 
%} 
  
/*** Rules ***/
%% 
.       ++no_of_chars; 
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
printf("The number of chars = %d\n", 
       no_of_chars ); 
  
return 0; 
}
