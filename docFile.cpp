//tao file mo rong (.txt, .hex)
//chon mode cho file
//ghi text -> doc text -> dong file
//thu vien <iostream>
//chuyen du lieu ve chuoi va luu vao file
#include "iostream"   //thu vien dung lenh doc file
#include "stdio.h"
#include "string.h"

int main(void){
	FILE *fp;   //tao file
	
	int a=5;
	int b = 5;
	int tong = a+b;
	int hieu = a-b;
	char str[100];
	char temp[100];
	
	sprintf(str,"a = %d, b = %d, tong = %d\n",a,b,tong);  //chuyen a, b , tong thanh chuoi roi dua vao bien str va in ra file o cau lenh fprintf
	sprintf(temp, "hieu = %d\n", hieu);
	strcat(str, temp);  //noi 2 chuoi voi lenh strcat
	
	fp = fopen("myfile.txt", "w+"); //tao duong dan file, ghi the nay se tao file o ngay vi tri luu file fopen(("ten file"), mode)
	fprintf(fp,str);   // cau lenh fprintf de ghi vao file, ghi cac tham so vao file  fprintf(bien goi file, "string")
	
	fclose(fp);
	
	return 0;
}
