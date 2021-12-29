#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt","w");
   fputs("This is compiler class in Summer 2020-2021", fp);

   fseek( fp, 17, SEEK_SET );
   fputs("sessional ", fp);
   fclose(fp);

   return(0);
}
