
//COMPILER DESIGN SEC:F NAME:FAWJIA,JEBA ID:19-39815-1

/*Lab Task-2:
2. Read a text message from a .txt file, calculate and print the
number of vowels and consonants from the contents of that
particular file in the console*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

     int i,vowels=0,consonants=0;

    FILE *fp ;
         char data[1000] ;
         printf( "Opening the file Jeba.txt in read mode" ) ;
         fp = fopen( "Jeba.txt", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file Jeba.txt" ) ;
                 return 1;
         }
         printf( "Reading the file Jeba.txt\n" ) ;
         while( fgets ( data, 50, fp ) != NULL )
            printf( "%s" , data ) ;
         printf("Closing the file Jeba.txt\n") ;
         fclose(fp) ;
           printf("Please press enter to see the result") ;
       gets(fp);

    for(i=0;data[i];i++)
    {
    	if((data[i]>=65 && data[i]<=90)|| (data[i]>=97 && data[i]<=122))
    	{

            if(data[i]=='a'|| data[i]=='e'||data[i]=='i'||data[i]=='o'||data[i]=='u'||data[i]=='A'||data[i]=='E'||data[i]=='I'||data[i]=='O' ||data[i]=='U')
		      vowels++;
            else
             consonants++;
        }

 	}


    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);



         return 0;
}
