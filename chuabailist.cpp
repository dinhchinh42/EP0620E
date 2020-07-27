#include "stdio.h"

typedef struct NhanVien
{
	int maNV;
	char tenNV[30];
	int luongCB;
	int luongPC;
}nhanvien_info;
/*********************************************/
struct Node
{
	NhanVien nv;
	Node *next;
};
/*********************************************/
struct LinkerList
{
	Node *head;
	Node *end;
};
/*********************************************/ 
Node *CreateNode(nhanvien_info nhanvien)
{
	Node *node = new Node();
	node->nv = nhanvien;
	node->next = NULL;
	return node;
}
/*********************************************/ 
void CreateList(LinkerList *list)
{
	list->head = NULL;
	list->end = NULL;
}
/*************************************************/
void AddHead(LinkerList *list, Node *node)
{
	if(list->head == NULL) /* vi tri tro den chua co data */
	{
		list->head = node;
		list->end = node;
	}
	else /*  tro den node moi */
	{
		node->next = list->head;
		list->end = node;
	}
}
/****************************************************/
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
/****************************************************/
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
	getchar();
	return 0;
}



