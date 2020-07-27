//Bai 1: viet chuong trinh nhap 20 so nguyen. In ra ket qua gom so trung binh cua cac sos nhap vao
//va so luong so co gia tri nho hon gia tri trung binh nay. dung mang de xu lty ket qua
/*
#include "stdio.h"
#define count 20

int main(void){
    int a[20];
    int tong =0;
    printf("Nhap so: ");
    for(int i = 0;i < count;i++)
    {
    	scanf("%d",&a[i]);
    	tong +=a[i];
	}
	printf("\nTrung binh cong cua day so: %d",(tong/count));
	for(int i=0;i<count;i++)
	{
		 if(a[i]<(tong/count))
		 {
	          printf("\nSo co gia tri nho hon gia tri trung binh: %d",a[i]);
	          
	     }
	     
	}
	getchar();
	return 0;
}
*/
/*
#include "stdio.h"
#include "stdlib.h"

char myarr[100];

int main(void){
	
	printf("Nhap chuoi: ");
	scanf("%s",&myarr);
	int count = 0;
	while(1){
		if(myarr[count] == '\0')break;
		if(('a'<= myarr[count]) && (myarr[count] <= 'z'))
		{
			myarr[count] = myarr[count] -32;
		}
		else
		{
			myarr[count] = myarr[count] +32;
		}
		count++;
	}
	printf("\n%s",myarr);
	getchar();
	return 0;
}*/

// tra ve mang 1 chieu tu ham
/*
#include "stdio.h"
#define length 10
int *nhap()
{
	static int arr[length];
	for(int i=0; i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	return arr; //de tra ve ham
}

void hienthi(const int arr[] )
{
	int i;
	
	for(i=0;i<length;i++)
	{
		printf("%5d\n",arr[i]);
	}
}
int main(void){
	int arr[length];
	int *b; //neu muon tra ve mang 1 chieu tu ham thi phai truyen vao con tro vaf khai bao ham cx
	// la con tro, bien thi phai la static
	b=nhap();
	hienthi(b);
	getchar();
	return 0;
}*/
//sap zep mang
/*
#include "stdio.h"
#include "ctype.h"
#define length 10
void nhap(int arr[]){
	for(int i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void hienthi(const int arr[])
{
	for(int i=0;i<length;i++)
	{
		printf("%5d\n",arr[i]);
	}
}
void bubbleSort(int arr[])
{
	int i,j;
	for(i=0;i<length-1;i++)
	{
		for(j=0;j>length-1;j--)
		{
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
		}
	}
}
int main(void){
	int arr[length];
	nhap(arr);
	printf("\nDay so truoc khi sap xep: \n");
	hienthi(arr);
	printf("\nDay so sau khi sap xep: \n");
	bubbleSort(arr);
	hienthi(arr);
	getchar();
	return 0;
}*/
//chan le, lonnhat  nho nhat trong mang
/*
#include "stdio.h"
#define max 100
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void hienthi(int a[], int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
}
//tinh tong cac so le
int tongLe(int a[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum+=a[i];
        }
    }
    return sum;
}
//tinh tong so chan
int tongChan(int a[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            continue; //bo qua k thuc hien
        }
        sum+=a[i];
        return sum;
    }
}
//lon nhat
int Max(int a[], int n)
{
    int Max = a[0];
    for (int i = 1; i < n; i++)
        if (Max < a[i])
            Max = a[i];
    return Max;
}
 //nho nhat
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main(void){
    int a[max];
    int n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    nhap(a,n);
    hienthi(a,n);
    printf("\nTong so le = %d",tongLe(a,n));
    printf("\nTong so chan = %d",tongChan(a,n));
    printf("\nSo lon nhat: %d",Max(a,n));
    printf("\nSo nho nhat: %d",min(a,n));
    return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
//dem ki tu xuat hien trong xau
char kiemtra(char chuoi[100], char n)
{
    int i, dem = 0;
    for (i = 0; i < strlen(chuoi); i++)
    {
        if (chuoi[i] == n)
        {
            dem++;
        }
    }
    if (dem > 0)
    {
        printf("\nki tu %c trong chuoi xuat hien %d lan ", n, dem);
    }
    if (dem == 0)
    {
        return 1;
    }
}
//tinh do dai chuoi
int length(char chuoi[])
{
    int i=0;
    for(i=0;chuoi[i]!='\0';i++);
    return i;
}
int main()
{
    char chuoi[100], n;
    int dem = 0;
    printf("nhap chuoi: ");
    gets(chuoi);
    printf("chuoi vua nhap la : %s", chuoi);
    printf("\nxin moi ban nhap vao ki tu can dem\n");
    scanf("%c", &n);
    if (kiemtra(chuoi, n) == 1)
    {
        printf("\nki tu %c khong co trong chuoi\n", n);
    }
    printf("\nDo dai chuoi = %d",length(chuoi));
}
*/
//ghi file
/*
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
}*/
//danh sach lien ket
/*
#include "stdio.h"

typedef struct NhanVien
{
	int maNV;
	char tenNV[30];
	int luongCB;
	int luongPC;
}nhanvien_info;

struct Node
{
	NhanVien nv;
	Node *next;
};

struct LinkerList
{
	Node *head;
	Node *end;
};

Node *CreateNode(nhanvien_info nhanvien)
{
	Node *node = new Node();
	node->nv = nhanvien;
	node->next = NULL;
	return node;
}

void CreateList(LinkerList *list)
{
	list->head = NULL;
	list->end = NULL;
}

void AddHead(LinkerList *list, Node *node)
{
	if(list->head == NULL) //vi tri tro den chua co data 
	{
		list->head = node;
		list->end = node;
	}
	else  // tro den node moi 
	{
		node->next = list->head;
		list->end = node;
	}
}

void AddEnd(LinkerList *list, Node *node)
{
	if(list->head == NULL)
	{
		list->head = node;
		list->end = node;
	}
	else
	{
		list->end->next = node;
		list->end = node;
	}
}

void PrintList(LinkerList list)
{
	if(list.head != NULL)
	{
		Node *node = list.head;
		while(node != NULL)
		{
			printf("\nTenNV: %s", node->nv.tenNV);
			node = node->next;
		}
	}
}
int main()
{
	int n;
	LinkerList list;
	CreateList(&list);
	nhanvien_info nvinfo;
	printf("Enter numbers of NhanVien: ");scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		printf("Moi nhap \"maNV[%d]\": ", i); scanf("%d", &nvinfo.maNV);
		printf("Moi nhap \"tenNV[%d]\": ", i); scanf("%s", &nvinfo.tenNV);
		printf("Moi nhap \"luongCB[%d]\": ", i); scanf("%d", &nvinfo.luongCB);
		printf("Moi nhap \"luongPC[%d]\": ", i); scanf("%d", &nvinfo.luongPC);
		AddEnd(&list, CreateNode(nvinfo));
	}
	
	PrintList(list);
	
	return 0;
}*/
/*
//so nguyen to tu nhap ban phim 1 so
#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong phai so nguyen to", n);
    }
}*/
//so nguyen to tu chuoi so
/*
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100 // s?c ch?a t?i da
 
void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
 
void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i, arr[i]);
    }
}
 

   // Ki?m tra s? nguyên t?

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
 

   // Ð?m s? lu?ng s? nguyên t?

int PrimeCount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}
 

   // Li?t kê các s? nguyên t?

 
void PrintPrime(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            printf("%d\t", a[i]);
        }
    }
}
 
int main()
{
    int arr[MAX_SIZE];
 
    int n; // s? lu?ng ph?n t? c?a m?ng
    // Ki?m tra s? lu?ng ph?n t? là s? duong + nh? hon MAX_SIZE
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
 
    // Nh?p m?ng
    NhapMang(arr, n);
 
    // Xu?t m?ng
    XuatMang(arr, n);
 
    // Gi?i bài toán
    int primeCount = PrimeCount(arr, n);
    printf("\nSo luong so nguyen to la %d", primeCount);
    if(primeCount > 0){
        printf("\nDanh sach so nguyen to: ");
        PrintPrime(arr, n);
    }
}*/






