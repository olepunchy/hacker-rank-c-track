#include <stdio.h>

int main(void) {

  int firstInt = 0;
  int secondInt = 0;
  double firstDouble = 0.0;
  double secondDouble = 0.0;

  // Input for the integers
  scanf("%d %d", &firstInt, &secondInt);

  // Input for the doubles
  scanf("%lf %lf", &firstDouble, &secondDouble);

  // Print the sum and difference of the integers
  printf("%d %d\n", firstInt + secondInt, firstInt - secondInt);

  // Print the sum and difference of the doubles
  printf("%.1lf, %.1lf\n", firstDouble + secondDouble,
         firstDouble - secondDouble);

  return 0;
}
