//ghi ra file text, mot cau ve mang(nhap vao 1 so random)
//, danh sach lien ket, nhap xuat, chuoi(dem so luong ky tu, co bao nhieu ky tu, no nam dau,duyet chuoi)
//bt ve danh sach
/*
   + nhap so luong nhan vien tu ban phim
   +  ma nhan vien, ten nhan vien, luong co ban, phu cap
   + in ra toan bo ten cua nhan vien vua nhap
   + in ra toan bo thong tin cua  nhung nhan vien co muc luong trung binh
*/
#include "stdio.h"
#include "stdlib.h"
typedef struct nhanVien
{
	//1 nhan vien se co 4 thong tin nhu nay
	int manv;
	char tennv[30];
	int luongcb;
	int luongpc;
}nhanvien_info;
//typedef struct nhanVien nv;  //khai bao nv de truy xuat vao struct tren,nv nay no se thay the cho struct nhanVien
/*--------------------------------------------*/
// n = 3 tuc la chua 3 nhan vien, tuong ung voi list moi node noi vs nhau
struct Node //tao node
{
	nhanVien nv;
	Node *next;
};
struct LinkerList
{
	Node *head;
	Node *end;
};
/*--------------------------------------------*/
Node *CreateNode(nhanvien_info nhanvien)
{
	Node *node = new Node();  //tao ra mot node moi, khai bao con tro thi dung dau gan ->
	node -> nv = nhanvien;  //dua cac thong tin cua nhanvien = nv vao node
	node -> next = NULL;
	return node;
}
/*-----------------------------------------------*/
void CreateList(LinkerList *list)
{
	list -> head = NULL;   //dau tien tro den bang null
	list -> end = NULL;
}
/*-----------------------------------------------*/
void AddHead(LinkerList *list, Node *node)  //can dua 3 thu vao do la list, node va info
{
	if(list -> head==NULL) //truong hop khi head  = rong vi tri tro den chua co data
	{
		list -> head = node;
		list -> end = node;
	}
	else // tro den node moi 
	{
		node -> next= list -> head;
		list -> end = node;
	}
}
/******************************************************/
void AddEnd(LinkerList *list, Node *node)
{
	if(list -> head == NULL)
	{
		list -> head = node;
		list -> end = node;
	}
	else
	{
		list -> end -> next = node;
		list -> end =node;
		
	}
}
/******************************************************/
void PrintList(LinkerList list)
{
	if(list.head!= NULL)
	{
		Node *node = list.head;
		while(node != NULL)
		{
			int tong = node -> nv.luongcb + node -> nv.luongpc;
			if((tong > 8) && (tong <12))
			{
			   printf("\nMa nhan vien: %d",node ->nv.manv);
			   printf("\nTen nhan vien: %s",node ->nv.tennv);
			   printf("\nLuong co ban: %d",node ->nv.luongcb);
			   printf("\nLuong phu cap: %s",node ->nv.luongpc);
			   node = node -> next;
		    }
		}
	}
}
int main(){
	int n;
	LinkerList list;
	CreateList(&list);
	nhanvien_info nvinfo;
	printf("Dien so nhan vien: "); scanf("%d",&n);
	for(int i = 0; i<n ;i++)
	{
		printf("Moi nhap \"manv[%d]\": ",i); scanf("%d",&nvinfo.manv);
		printf("Moi nhap \"tennv[%d]\": ",i); scanf("%s",&nvinfo.tennv);
		printf("Moi nhap \"luongcb[%d]\": ",i); scanf("%d",&nvinfo.luongcb);
		printf("Moi nhap \"luongpc[%d]\": ",i); scanf("%d",&nvinfo.luongpc);
		//CreateNode(nhanvien);  //sau moi lan nhap se dua thong tin vao bien nhanvien va tao node cho bien do
		                    //tuc la dua thong tin vao bien roi tao node va dua thong tin vao node, gio viet dua node vao list, phai tao ca list nua
	    AddEnd(&list, CreateNode(nvinfo));
	    
	}
	PrintList(list);
	return 0;
}
