//danh sach lien ket
//de thi: chuoi, tao chuoi, nhap chuoi, tim chu hoa, chu thuong, chuyen ve chu hoa, chu thuong, vi tri trong chuoi
//cac thuat toan tinh toan: trung binh cong , dt ,cv,...
//for nhap mang, tang dan giam dan
#include "stdio.h"
#include "string.h"
/*----------------------------------------------------*/
typedef struct member{  //struct nay de tao data, bien cho data
	char name[20];
	int age;
	char address[50];
	bool married;
}member_t;
/*----------------------------------------------------*/
typedef struct Node   //struct node nay de tro den va luu tru vao bo nho, thao tac voi du lieu
{
	member_t memb;
	Node *next;
}node_t;
/*----------------------------------------------------*/
node_t *node = NULL;
bool isEmpty(node_t *nt)    //ham nay de kiem tra vi tri can luu xem co data hay khong, cai vi tri o nho do da co du lieu hay chua
{
	if(nt != NULL) return true; //1 la true, 0 la false
	else  return false;
	
}
/*----------------------------------------------------*/
bool insertData(member_t mem)
{
	if(node == NULL)
	{
		//Insert data
		node->memb = mem;
		node++;
	}
	else
	{
		printf("The data is available for this node");
	}
	return true;
}

member_t getData()
{
	member_t info;
	info = node->memb;
	return info;
}
/*---------------------------------------*/
node_t *createNode(node_t index, member_t mb)
{
	node_t *temp = new Node;
	temp -> memb = mb;
	temp -> next = index;
	return temp;
}
node_t deleteNode(int index)
{
	
}
node_t insertNode(int index, member_t data)
{
	
}
int main(void){
	//node_t *node;  //moi dia chi ma no tro den se co 2 thanh phan o trong Node do la data member va con tro next
	
	member_t mb;
	strcpy(mb.name,"Dinh Duc Chinh");
	mb.age = 21;
	strcpy(mb.address,"Ha Noi");
	mb.married= false;
    insertData(mb);
	
	return 0;
}




