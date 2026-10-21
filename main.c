#include <stdio.h>

int main() {
  float a, b, c;
  printf("nhap vao ba so a, b, c:");
  scanf("%f %f %f", &a, &b, &c);
  float max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  printf("So lon nhat la: %.2f\n", max);
  return 0;

}