//http://tailieu8051.blogspot.com/2018/11/giao-tiep-cam-bien-chuyen-ong-pir.html
//for( ; ; ); bang voi while(1);
//while(dk) {thuc hien};
//do(thuc hien cv){}while(dk)
//switch(dk){case}
//chuoi la 1 dang dac biet cua mang, nam trong bang ma ascii
//cach khai bao. vd: char mystring[] = " ";
//de bai: cho 1 chuoi bat ky, nhap vao 1 ky tu, tim xem co bao nhieu ky tu va vi tri xuat hien cua no trong chuoi, neu la ky tu thg thi 
//doi thanh ky tu hoa
#include "stdio.h"
#include "string.h"

char myarr[] = "afafafafafasf";
int main(void){
	char n;
	printf("Nhap 1 ky tu: ");
	scanf("%c",&n);
	int count =0;
	for(int i = 0;i<strlen(myarr); i++)
	{
		if(myarr[i] == n && (myarr[i] >= 'a' && myarr[i] <= 'z'))
		{
			//count += 1;
			printf("tim thay ky tu %c tai vi tri %d\n",myarr[i],i);
			myarr[i] = myarr[i]-32;
		}
	
	}
	printf("\n%s",myarr);
	return 0;
}
