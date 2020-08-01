#include <stdio.h>

int main(int argc, char *argv[])
{
 FILE *fi;
 FILE *fd;
 char *name;
 char h;
if (argc < 2)
   {
        printf("Missing Filename\n");
        return(1);
   }
   else
  {
        name = argv[1];
        printf("Filename : %s\n", name);
   }
 fi = fopen("/home/saleemuddin1/saleemuddin1812020/FINALc/hi.txt","r");
 //fd = fopen("hi.txt", "w");
 if ( fi )
      {
        printf("File contents:\n");
        while ( (h = fgetc(fi)) != EOF )
           {
                printf("%c",h);
		//h = fgetc(fi);
		//fprintf(fd,"%c", ch);
		//ch = fgetc(fd);
           }

       }
   else
      {
         printf("Failed to open the file\n");
        }
printf ("File Contents are in Original Input File: hi.txt\n");
return(0);
}
