#include <stdio.h>

int main() {
  float dtb;
  int drl;
  int xlhk;
  int xlhl;
  scanf("%f", &dtb);
  scanf("%d", &drl);
  scanf("%d", &xlhk);
  scanf("%d", &xlhl);
  if (dtb >= 9.0) {
    xlhl = 1; 
    printf("XUAT_SAC");
  } else if(8.0 <= dtb < 9.0) {
    xlhl = 2; 
    printf("GIOI");
  } else if (7.0 <= dtb < 8.0) {
    xlhl = 3; 
    printf("KHA");
  } else if (dtb < 7.0) {
    xlhl = 4; 
    printf("KHONG_DAT");
  } else {
    
  }
  if (drl >= 90) {
    xlhk = 1; 
    printf("XUAT_SAC");
  } else if (80 <= drl < 90) {
    xlhk = 2; 
    printf("TOT");
  } else if (70 <= drl < 80) {
    xlhk = 3; 
    printf("KHA");
  } else if (drl < 70) {
    xlhk = 4;
    printf("KHONG_DAT");
  } else {

  }
  if (xlhl == 1 && xlhk == 1) {
    printf("HOC_BONG_XUAT_SAC");
  } else if (xlhl == 2 && (xlhk == 1 || xlhk == 2 || (xlhk == 1 && xlhk == 2) {
    printf("HOC_BONG_GIOI");
  } else if () {
    printf("HOC_BONG_KHA");
  } else if () {
    printf ("KHONG_DAT");
  } else {

  }
  return 0;
}