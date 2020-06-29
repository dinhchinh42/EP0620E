//viet chuong trinh nhap 20 so nguyen. In ra ket qua gom so trung binh cua cac sos nhap vao
//va so luong so co gia tri nho hon gia tri trung binh nay. dung mang de xu lty ket qua
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
