#include <stdlib.h>
#include <stdio.h>

int main(int argc, char ** argv) {
    FILE * file;
    FILE * f5;
    int i;
    int key = 150;
    file = fopen("/home/saleemuddin1/saleemuddin1812020/holders/a.txt", "r");
    //f5 = fopen("./contents.txt", "w");
    int sum;
    size_t reader;
    char * holder = NULL;
    size_t len = 0;

    size_t bufsize = 10;
    int * buf = (int *)malloc(sizeof(int) * bufsize);

    int val = 0;
    while((reader = getline(&holder, &len, file)) != -1) {
        buf[val++] = atoi(holder);

        if (val % 10 == 0) {
            bufsize += 10;
            buf = (int *)realloc(buf, sizeof(int) * bufsize);
        }
    }

    for (i = 0; i < val; i++) {
        sum = buf[i]-key;
	//key = (key-1);	
	//printf("%d\n", buffer[i]);
	//fputs(sum, f5);	
	printf("%d", sum);
	printf(" ");
	
	//printf("%d", sum) ;
	key = ((key-1) % 256);
    }

    free(buf);
    fclose(file);
}

