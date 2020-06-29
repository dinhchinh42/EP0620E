//Bai 1: viet chuong trinh nhap 20 so nguyen. In ra ket qua gom so trung binh cua cac sos nhap vao
//va so luong so co gia tri nho hon gia tri trung binh nay. dung mang de xu lty ket qua
/*
#include "stdio.h"
#define count 20
int main(void){
	int a[20];
	int tong=0;
    printf("Nhap 20 so: ");
    for(int i=0;i<count;i++){
    	scanf("%d",&a[i]);
    	tong += a[i];
    }
    printf("Trung binh cong: %d",(tong/count));
    for(int i=0;i<count;i++){
       if(a[i] < (tong/count)){
       	printf("\nGia tri nho hon TBC: %d\n",a[i]);
       }
    }
    return 0;
}
*/

//Bai 2: viet 1 ham tim dien tich HCN cho biet duong cheo va chu vi
/*
#include "stdio.h"
float dtHCN (float dc, float cv)
{
	if(cv <= (2*dc))   //kiem tra dk 
	{
		printf("Vui long xem lai !");
		return 0;
	}
	else   //giai he pt
	{
		return (float)((cv*cv/4-dc*dc)/2);
	}
	
}
int main(void){
	printf("%f",dtHCN(5.1234,16.34));
	return 0;
}
*/
//bai3: viet 1 chuong trinh bao gom tinh tong/tich cua 2 ma tran
#include "stdio.h"
#include "ctime"
#include "stdlib.h"
#define SIZE 2
int count = 1;
int a[SIZE][SIZE];
int b[SIZE][SIZE];
int c[SIZE][SIZE];
int tinh_tong_ma_tran (int size) //ma tran vuong
{
	srand(time(NULL));
	for(int i=1; i<=size; i++)
	{
		for(int j=1;j<=size;j++)
		{
			a[i][j] = rand()%50+1;
			printf("Moi nhap phan tu a[%d][%d] = %d\n",i,j,a[i][j]);
			b[i][j] = rand()%50+1;
			printf("Moi nhap phan tu b[%d][%d] = %d\n",i,j,b[i][j]);
		}
	}
	printf("---------------Cong hai ma tran---------------------");
	for(int i=1; i<=size; i++)
	{
		for(int j = 1; j<=size ;j++)
	    {
		   c[i][j] = a[i][j]+b[i][j];
		   printf("\nTong cua phan tu thu %d = %d",count,c[i][j]);
		   count++;
	    }
		printf("\n");
	}
	printf("---------------Tich hai ma tran---------------------");
	/*
	for(int i = 1; i<size ;i++)
	{
		for(int j=0;j<size;j++)
		{
			int temp = 0;
			for(int k=0;k,size;k++)
			{
				temp += 
			}
		}
	}*/
	//test 2 hang 2 cot (co the xoa di), doan define size 3 doi thanh 2
	count = 1;
	for(int i=1; i<=size; i++)
	{
		for(int j = 1; j<=size ;j++)
	    {
		   c[i][j] = a[i][j]*b[i][j] + a[i][j+1]*b[i+1][j];
		   printf("\nTong cua phan tu thu %d = %d",count,c[i][j]);
		   count++;
	    }
		printf("\n");
	}

}

int main(void){
	tinh_tong_ma_tran(SIZE);
	return 0;
}




























