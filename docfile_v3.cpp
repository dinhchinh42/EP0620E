#include "stdio.h"
#include "iostream"
#include "string.h"
//doc file
int main(void){
	FILE *fp;
	char data_read[100];
	fp = fopen("myfile.txt", "r");
	fread(data_read,20,3,fp);
	printf("noi dung la: %s",data_read);
	return 0;
}

