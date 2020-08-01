#include <stdio.h> 
#include <stdlib.h>

int main () {
FILE *f1;
FILE *f2;
FILE *f3;
FILE *f4;
//char 
char c,d,e;
int counter = 69;
f1 = fopen ("/home/saleemuddin1/Lab2/pushed.sh", "rb");
f2 = fopen ("/home/saleemuddin1/Lab2/echod.sh", "rb");
f3 = fopen ("/home/saleemuddin1/Lab2/BasicCommands.txt", "rb");
f4 = fopen ("/home/saleemuddin1/saleemuddin1812020/holders/binaryholder2.bin","wb");
c = fgetc(f1);
d = fgetc(f2);
e = fgetc(f3);
fprintf(f4, "%d\n", counter);

while (c != EOF)
{
	printf ("%d", c);
	printf(" ");
	c = fgetc(f1);
	//fprintf(f4,"%d\n",counter );
        fprintf(f4, "%d\n");	
}
while (d != EOF)
{
        printf ("%d", d);
        printf(" ");
        d = fgetc(f2);
        //fprintf(f4,"%d\n",counter );
        fprintf(f4, "%d\n");
}
while (e != EOF)
{
        printf ("%d", e);
        printf(" ");
        e = fgetc(f3);
        //fprintf(f4,"%d\n",counter );
        fprintf(f4, "%d\n");
}
printf("\n");        
fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
return 0;
}

