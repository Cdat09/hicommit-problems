#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  float max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  printf("%d", max);
  
return 0;

}