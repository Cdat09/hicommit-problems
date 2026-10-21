#include <stdio.h>

int main() {
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  float max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  printf("%.2f\n", max);
  
return 0;

}