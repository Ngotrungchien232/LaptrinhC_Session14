#include<stdio.h>
#include<string.h>

int main(){
	char chuoi[100];
	printf("moi ban nhap các ki tu vao chuoi: ");
	scanf("%99s", chuoi);
	int length = strlen(chuoi);
	int i;
	//in ra chuoi
	for(i = length; i >= 0; i--){
		printf("%c\n", chuoi[i]);
	}
	//ket thuc chuong trinh
	return 0;
}
