//quan ly source code, Git, tai khoan git: dinhchinh42 T0lachua1234
//lap tk tren github.com, tao folder, git bash here, git clone
// lenh git clone <path>: de lay duong dan ve
//git status de xem cac file trong
//git add <title> de them file len server web,co 3 dang: git add <title>, *, --all(file la de add rieng moi file, * la de add tat ca len, --all dung khi
//co file dua len, co file xoa di
//git commit -m " my comment": de viet comment cho file tren git
//git push origin master/branch (tuy ten minh muon xem): de day file len server web
//git checkout -b "doi sang branch moi (master sang branch01)"
//git branch: de xem so luong branch master trong project, k lien quan den nhau
// de chuyen giua cac master va branch thi dfung lenh: git checkout <user (master or branch)>
// khi da dung lenh day len thi se biet branch nao dang co bai, branch nao chua co, de xoa branch thi dung lenh git branch -d<branchnam> 
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
