#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int n;
  scanf("%d", &n);

  int length = (n * 2) - 1;

  for (int outer = 0; outer < length; outer++) {
    for (int inner = 0; inner < length; inner++) {
      int num = outer < inner ? outer : inner;
      num = num < (length - outer) ? num : (length - outer) - 1;
      num = num < (length - inner) - 1 ? num : (length - inner) - 1;
      printf("%d ", n - num);
    }

    printf("\n");
  }

  return 0;
}
