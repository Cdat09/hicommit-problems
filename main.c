#include <stdio.h>

int main() {
    float dtb;
    int drl;
    
    printf("Nhap diem trung binh (dtb): ");
    scanf("%f", &dtb);
    printf("Nhap diem ren luyen (drl): ");
    scanf("%d", &drl);
    
    int hoc_luc = 0;
    int ren_luyen = 0;
    
    if (dtb >= 9.0) {
        hoc_luc = 3; 
    } else if (dtb >= 8.0) {
        hoc_luc = 2; 
    } else if (dtb >= 7.0) {
        hoc_luc = 1; 
    } else {
        hoc_luc = 0; 
    }
    
    if (drl >= 90) {
        ren_luyen = 3; 
    } else if (drl >= 80) {
        ren_luyen = 2; 
    } else if (drl >= 70) {
        ren_luyen = 1; 
    } else {
        ren_luyen = 0; 
    }
    
    if (hoc_luc == 3 && ren_luyen == 3) {
        printf("HOC_BONG_XUAT_SAC\n");
    } 
    else if ((hoc_luc == 2 && (ren_luyen == 2 || ren_luyen == 3)) || (hoc_luc == 3 && ren_luyen == 2)) {
        printf("HOC_BONG_GIOI\n");
    } 
    else if ((hoc_luc == 1 && (ren_luyen >= 1)) || (hoc_luc == 2 && ren_luyen == 1) || (hoc_luc == 3 && ren_luyen == 1)) {
        printf("HOC_BONG_KHA\n");
    } 
    else {
        printf("KHONG_DAT\n");
    }
    
    return 0;
}
