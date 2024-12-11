#include <stdio.h>

int main() {
    char chuoi[100];
    int dem_chu_cai = 0;
    int i;

  
    printf("Nhap vao chuoi ki tu ma ban muon?: ");
    fgets(chuoi, sizeof(chuoi), stdin); 


    for (i = 0; chuoi[i] != '\0'; i++) {
      
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            dem_chu_cai++;
        }
    }

    printf("so ki tu la chu cai trong chuoi la: %d\n", dem_chu_cai);

    return 0;
}

