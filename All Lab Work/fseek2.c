/* fseek example */
#include <stdio.h>

int main ()
{
  FILE * pFile;

  pFile = fopen ( "example.txt" , "w+" );
  fputs ( "This is our programming design lab." , pFile );

  fseek ( pFile , 14 , SEEK_SET );
  fputs ( "compiler lab" , pFile );
  fclose ( pFile );

  return 0;
}
