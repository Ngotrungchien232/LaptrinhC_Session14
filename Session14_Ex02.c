#include<stdio.h>
#include<string.h>

int main(){
	char chuoinguoidungnhap[100];
	printf("moi ban nhap chuoi ma ban muon: ");
	scanf("%99s", chuoinguoidungnhap);
	int length = strlen(chuoinguoidungnhap);
	//tien hanh in ra chuoi
	int i;
	for(i = 0; i < length; i++){
		printf("%c\n", chuoinguoidungnhap[i]);
		printf("\n");
	}
	//ket thuc chuong trinh 
	return 0;
}
