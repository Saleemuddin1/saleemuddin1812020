#include<stdio.h>
#include<stdlib.h>

int main() {
        char temp[50]="/home/saleemuddin1/FinalExam/FINALc";
	if (temp) {
	//printf("Directory Created!\n");
	sprintf(temp, "mkdir /home/saleemuddin1/FinalExam/FINALc");
        system(temp);
	}
	
	else {
	printf ("Error! Directory Exists!");
	}
	printf ("Directory Created!");
	char another[50];
	sprintf(another, "mkdir /home/saleemuddin1/FinalExam/FINALc/copies");
	system(another);
	sprintf(another, "mkdir /home/saleemuddin1/FinalExam/FINALc/encrypted");
	system(another);
	sprintf(another, "mkdir /home/saleemuddin1/FinalExam/FINALc/decrypted");
	system(another);
	
}
