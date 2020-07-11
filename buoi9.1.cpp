#include "stdio.h"
#include "string.h"

char myarr[100];

int main(void){
	
	printf("xin moi nhap chuoi: ");
	scanf("%s",&myarr);
	printf("ban da nhap vao la: %s",myarr);
    int count = 0;
    while(1){ //dieu kien luon dung se thuc hien cau lenh trong vong lap
    	if(myarr[count] == '\0')break;  //phai co break de ket thuc vong lap, gia tri 0
    	if(('a' <= myarr[count]) && (myarr[count] <= 'z') )
    	{
    		myarr[count] = myarr[count] - 32;
    	}
    	else
    	{
    		myarr[count] = myarr[count] + 32;
    	}
    	count++;
    }
    printf("\n%s",myarr);
	return 0; 
}
