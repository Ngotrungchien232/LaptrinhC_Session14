#include<stdio.h>
#include<string.h>

int main(){
	char chuoi[100];
	printf("moi ban nhap vao chuoi ki tu: ");
	scanf("%99s", chuoi);
	int length = strlen(chuoi);
	
	// sau do cho nguoi dung nhap vao mot ki tu bat ki 
	int index;
	printf("moi ban nhap ki tu can tim: \n");
	getchar();
	scanf("%c", &index);
	
	// tien hanh kiem tra xem ki tu do co trong chuoi hay khong 
	int i;
	int number = 0;
	for(i = 0; i < length; i++){
		if(chuoi[i] == index){
			number ++;
		}
	}
	//in ra so lan phan tu do co trong chuoi
	printf("so lan phan tu %c xuat hien trong chuoi la: %d\n", index, number);
	
	//ketthuc chuong trinh 
	return 0;
}
