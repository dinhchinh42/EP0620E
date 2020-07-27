#include "stdio.h"

#define max 100
void nhap(int a[],int n)
{
    int i;
    printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Nhap mang a[%d]: ",i);
        scanf("%d",&a[i]);
    }
  
}
void hienthi(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
}
int demPT(int a[],int n,int x)
{
    int i, dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            dem++;
        }
    }
    return dem;
}
int main(void){
    int a[max],x,n;
    nhap(a,n);
    printf("Noi dung cua mang: \n");
    hienthi(a,n);
    printf("nhap x= ");
    scanf("%d",&x);
    int kq=demPT(a,n,x);
    printf("\nSo phan tu %d co trong mang: %d",x,kq);
    getchar();
    return 0;
}

