%{ 

    int operators = 0, operands = 0, valid = 1, top = -1, l = 0, j = 0 , m = 0; 
    char operand[10][10], operator[10][10], stack[100], flag = 0;    
%} 
%%
"(" { 
    top++; 
    stack[top] = '('; 
} 
"{" {
    top++; 
    stack[top] = '{'; 
} 
"[" { 
    top++; 
    stack[top] = '['; 
} 
")" { 
    if (stack[top] != '(') { 
        valid = 0;     
    } 
    else if(operands>0 && (operands-operators)!=1){
        valid=0;
    }
    else{
        top--;
        operands=1;
        operators=0;
    } 
} 
"}" { 
    if (stack[top] != '{') { 
        valid = 0;     
    } 
    else if(operands>0 && (operands-operators)!=1){
        valid=0;
    }
    else{
        top--;
        operands=1;
        operators=0;
    } 
} 
"]" { 
    if (stack[top] != '[') { 
        valid = 0; 
    } 
    else if(operands>0 && (operands-operators)!=1){
        valid=0;
    }
    else{
        top--;
        operands=1;
        operators=0;
    }          
} 
"+"|"-"|"*"|"/" {operators++;printf("\t\n operators : %s", yytext);l++;} 
[0-9]+|[a-zA-Z][a-zA-Z0-9_]* {operands++;printf("\t\n operands : %s", yytext);j++;}
^[^a - z A - Z _][@#] {flag = 1;printf("\t\n invalid Expression %s", yytext);m++;}

%%  
int yywrap() 
{ 
return 1;
    
} 
int main() 
{ 

FILE *fp; 
char filename[50]; 
printf("Enter the filename: \n"); 
scanf("%s",filename); 
fp = fopen(filename,"r"); 
yyin = fp;
yylex(); 

    if (valid == 1 && top == -1) { 
        printf("\nValid Expression\n"); 
    } 
    else
        printf("\nInvalid Expression\n"); 

return 0;
} 