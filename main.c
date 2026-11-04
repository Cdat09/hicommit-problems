#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    float dtb;
    int drl;
    
    printf("Nhap diem trung binh (dtb): ");
    scanf("%f", &dtb);
    printf("Nhap diem ren luyen (drl): ");
    scanf("%d", &drl);
    
    int hoc_luc = (dtb >= 9.0) ? 3 : (dtb >= 8.0) ? 2 : (dtb >= 7.0) ? 1 : 0;
    
    int ren_luyen = (drl >= 90) ? 3 : (drl >= 80) ? 2 : (drl >= 70) ? 1 : 0;
    
    int muc_hoc_bong = min(hoc_luc, ren_luyen);
    
    if (muc_hoc_bong == 3) {
        printf("HOC_BONG_XUAT_SAC\n");
    } else if (muc_hoc_bong == 2) {
        printf("HOC_BONG_GIOI\n");
    } else if (muc_hoc_bong == 1) {
        printf("HOC_BONG_KHA\n");
    } else {
        printf("KHONG_DAT\n");
    }
    
    return 0;
}
