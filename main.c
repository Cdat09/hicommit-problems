#include <stdio.h>

int main() {
  int distance, order_value;

  if (scanf("%d %d", &distance, &order_value) == 2) {
    if (distance <= 0 || order_value < 0) {
      printf("NVALID\n");
    }
    else if (order_value >= 500000 && distance <= 15) {
      printf("0\n");
    }
    else {
      if (distance >= 1 && distance <= 5) {
        printf("15000\n");
      }
      else if (distance >= 6 && distance <= 15) {
        printf("25000\n");
      }
      else if (distance > 15) {
        printf("40000\n");
      }
    }
  }
    return 0;
}