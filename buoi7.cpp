//ngay 7/3. thu 6
//bai tap ve con tro
//vd: gia tri: 5 4 3 2 1 100  101
//    dia chi: 0 1 2 3 4 19   100
//vd: khi goi con tro thi con tro do mang dia chi va gia tri cua vung nho do. vidu: *ptr mang dia chi 0 co the tro den gia tri 4
// neu ep kieu *(*ptr1 = 19)) tuc la ptr tro den dia chi 19 mang gia tri la 100 con ngoac ngoai la tro den vi tri 100 mang gia tri 101

#include "stdio.h"
 int *ptr1 = (int *)100;
 int a=4206680, b=25,c=45;  //thay doi gia tri a len 4206680 de chac chan la dia chi co ton tai
 
 int main (void){
 	
 	printf("ptr1 address: %d\n",&ptr1); //in ra dia chi ptr 
 	printf("ptr1 value: %d\n",ptr1);  //in ra gia tri ptr
 	printf("a address: %d\n",&a);
 	printf("a value: %d\n",a);
 	
 	
 	ptr1 = &a;
 	printf("a address: %d\na value: %d\n",&a,a); //gia tri va dia chi cua a
 	printf("new ptr1 value: %d\nnew ptr1 address: %d\n",*ptr1,&ptr1); //van mang dia chi cua ptr1 va mang gia tri cua a
 	printf("new ptr1 value: %d\n",*(int*)(*(ptr1))); //tro den gia tri cua a la 4206680, long dia chi tro den dia chi 4206680 la gia tri ...
 	return 0;
 }
 
