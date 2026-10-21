#include <stdio.h>
int main() {
  int t;
if (scanf("%d", &t) == 1) {
  if (t < 15) {
    printf("LANH\n");
  }
  else if (t > 15 && t < 25) {
    printf("MAT\n");
  }
  else if (t > 25 && t < 35) {
    printf("NONG\n");
  }
  else { 
    printf("RAT_NONG\n");
  }
}

  return 0;
}