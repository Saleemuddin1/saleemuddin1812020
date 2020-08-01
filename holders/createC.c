#include<stdio.h>
#include<stdlib.h>

int main() {
        char temp[50]="/home/saleemuddin1/saleemuddin1812020/FINALc";
	if (temp) {
	//printf("Directory Created!\n");
	sprintf(temp, "mkdir /home/saleemuddin1/saleemuddin1812020/FINALc");
        system(temp);
	}
	
	else {
	printf ("Error! Directory Exists!");
	}
	printf ("Directory Created!");
	char another[50];
	sprintf(another, "mkdir /home/saleemuddin1/saleemuddin1812020/FINALc/copies");
	system(another);
	sprintf(another, "mkdir /home/saleemuddin1/saleemuddin1812020/FINALc/encrypted");
	system(another);
	sprintf(another, "mkdir /home/saleemuddin1/saleemuddin1812020/FINALc/decrypted");
	system(another);
	
}
