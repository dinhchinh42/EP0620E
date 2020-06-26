//quan ly source code, Git, 
//lap tk tren github.com, tao folder, git bash here, git clone
#include "stdio.h"
int main(){
	float n;
	printf("Nhap canh: ");
	scanf("%f",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=n-1; j >= i;j--)
		{
			printf(" ");
		}
		for(int k=0;k<(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
