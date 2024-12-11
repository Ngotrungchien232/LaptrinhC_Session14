#include<stdio.h>
#include<string.h>


int main(){
	//yeu cau nguoi dung nhap vao mot chuoi
	char chuoinguoidungnhap[100];
	printf("moi ban nhap vao chuoi ki tu ma ban muon: ");
	scanf("%99s", chuoinguoidungnhap);
	int length = strlen(chuoinguoidungnhap);
	
	//tien hanh in ra chuoi
	int i;
	for(i = 0; i < length; i++){
		printf("%c\n", chuoinguoidungnhap[i]);
	}
	printf("do dai cua chuoi la: %d", length);
	
	//ket thuc chuong trinh
	return 0;
}

