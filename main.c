#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f", &dtb);
  scanf("%d", &drl);
  if (dtb >= 9.0) {
    printf("XUAT_SAC");
  } else if(8.0 <= dtb < 9.0) {
    printf("GIOI");
  } else if (7.0 <= dtb < 8.0) {
    printf("KHA");
  } else  (dtb < 7.0) {
    printf("KHONG_DAT")
    
  }
  return 0;
}