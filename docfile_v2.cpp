// tao 1 mang so bat ky gom 20 phan tu
// lay ra so nguyen to
//ghi day so nguyen to ra file.txt
#include "iostream"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"

int main(void){
	FILE *fp;
	int arr[12] = {0,5,3,6,10,12,35,67,98,22,43,65};
	fp = fopen("myfile1.txt", "w+"); //tao duong dan file, ghi the nay se tao file o ngay vi tri luu file fopen(("ten file"), mode)
	for(int i = 0; i < 12;i++)
	{
	    if(arr[i] != 0 && arr[i] != 1){
	    	//la so nguyen to
	    	fprintf(fp, "so nguyen to la: %d\n", arr[i]);
	    }
	    else
	    {
	    	int count =0;
	    	for(int j = 0; j<arr[i];j++)
	    	{
	    		if(arr[i]%j == 0) count++;
	    	}
	    	if(count == 2)
	    	{
	    	   fprintf(fp, "so nguyen to la: %d\n", arr[i]);
	    	}
	    }
	}
    fclose(fp);
    return 0;  
}
	
	

