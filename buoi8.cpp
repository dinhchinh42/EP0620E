//cap phat bo nho
//malloc(int size)
//malloc() la ham dc dung de thuc hien viec cap phat bo nho tu vung nho con tu do, cap phat voi size co san
//int *p = malloc(4);  (viet the nay la cho truoc kich co cua vung nho)( dua vao mang 4 byte a b c d, neu co them e vao nua thi se bi tran, vi vuot qua 4)
//int *p = &a; (viet the nay la k quan tam den cap phat bao nhieu bo nho, compiler tu lam, tu cap phat)(vd: dung cho 8051)
//----------------------------------------------------------------------------------------------------------------------------
//calloc
//khai bao: calloc(int num, int size);
// *p = malloc(5) (goi 1 vung nho, vung nho do co 5 byte)
//*p' = calloc(3,5)( tuc la co 3 mang, moi mang co 5 byte)
//------------------------------------------------------------
//ham realloc()
//ham free() dung de giai phong bo nho

#include "stdio.h"
#include "stdlib.h"

int main(void){
	int *ptr,i;
	ptr= (int*)calloc(5, sizeof (int*));/*
	printf("ptr address: %d\n",&(*ptr)); //kieu int nhay 4 bit
	printf("ptr address: %d\n",&(*(ptr+1))); //vi tri dia chi cua con tro *ptr[1]
	printf("ptr address: %d\n",&(*(ptr+2)));*/
	if(*ptr != NULL)
	{
		//*ptr[0] = 1;
		*(ptr+0) = 1; //chinh la *ptr[0]
		*(ptr+1) = 2; 
		*(ptr+2) = 4; 
		*(ptr+3) = 8; 
		*(ptr+4) = 16;  
		printf("address: %d, value:%d\n",&(*(ptr+0)),*(ptr+0));
	    printf("address: %d, value:%d\n",&(*(ptr+1)),*(ptr+1));
	    printf("address: %d, value:%d\n",&(*(ptr+2)),*(ptr+2));
	    printf("address: %d, value:%d\n",&(*(ptr+3)),*(ptr+3));
	    printf("address: %d, value:%d\n",&(*(ptr+4)),*(ptr+4));
	}
	return 0;ed
}

