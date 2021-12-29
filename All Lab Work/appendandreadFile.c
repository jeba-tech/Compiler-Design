/* Open, Read and close a file: reading string by string */

# include <stdio.h>
int main( )
{
   char name[50];
   int marks, i, num;

   FILE *fptr;
   fptr = (fopen("test.txt", "a"));
   printf("Enter number of students: ");
   scanf("%d", &num);
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }

for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);

      printf("Enter marks: ");
      scanf("%d", &marks);

      fprintf(fptr,"\nName: %s Marks: %d \n", name, marks);
   }


   fclose(fptr);


         FILE *fop ;
         char data[500] ;
         printf( "Opening the file test.txt in read mode" ) ;
         fop = fopen( "test.txt", "r" ) ;
         if ( fop == NULL )
         {
                 printf( "Could not open file test.txt" ) ;
                 return 1;
         }
         printf( "Reading the file test.txt\n" ) ;
         while( fgets ( data, 500, fop ) != NULL )
         printf( "%s" , data ) ;
         printf("Closing the file test.txt") ;
         fclose(fop) ;
         return 0;
}
