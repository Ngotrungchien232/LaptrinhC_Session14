#include<stdio.h>
#include<string.h>

int main(){
    //khai bao va gan gia tri cho chuoi
    char chuoi[100];
    //yeu cau nguoi dung nhap gia tri cho chuoi
    printf("Moi ban nhap gia tri cho chuoi: ");
    
    // Su dung scanf voi truong hop dac biet de co the dem duoc dau cach
    scanf("%[^\n]", chuoi);
    //tao bien count de co the dem duoc cac gia tri trong chuoi
    int count = 0;
    //tao bien i de co the chay
    int i = 0;
    
    // vong lap while bo qua cac khoang trong neu co
    while (chuoi[i] != '\0' && (chuoi[i] == ' ' || chuoi[i] == '\t')) {
        i++;
    }
    
    // duyet qua va dem so lan lap trong chuoi
    while (chuoi[i] != '\0') {
        // neu la ki tu khong phia dau cach thi do chinh la bat dau mot phan tu
        if (chuoi[i] != ' ' && chuoi[i] != '\t') {
            count++;
            // bo qua cac ki tu con lai cua tu do (den khi gap dau cach hoac tab thi moi ket thuc chuoi)
            while (chuoi[i] != '\0' && chuoi[i] != ' ' && chuoi[i] != '\t') {
                i++;
            }
        } else {
            i++; //neu la dau cach hoac tab thi chuyen sang ki tu tiep theo
        }
    }
    
    // in ket qua ra man hinh
    printf("So luong tu trong chuoi: %d\n", count);

    return 0;
}

