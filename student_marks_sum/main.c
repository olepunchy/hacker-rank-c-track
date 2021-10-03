#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int marks_summation(int *marks, int number_of_students, char gender) {

  int sum = 0;

  switch (gender) {
  case 'b': {
    for (int index = 0; index < number_of_students; index += 2) {
      sum += marks[index];
    }

  } break;

  case 'g': {
    for (int index = 1; index < number_of_students; index += 2) {
      sum += marks[index];
    }

  } break;

  default:
    break;
  }

  return sum;
}

int main() {
  int number_of_students;
  char gender;
  int sum;

  scanf("%d", &number_of_students);
  int *marks = (int *)malloc(number_of_students * sizeof(int));

  for (int student = 0; student < number_of_students; student++) {
    scanf("%d", (marks + student));
  }

  scanf(" %c", &gender);
  sum = marks_summation(marks, number_of_students, gender);
  printf("%d", sum);
  free(marks);

  return 0;
}
