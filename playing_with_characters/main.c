#include <stdio.h>
#include <string.h>

#define MAX_LEN 256

int main(void) {

  char inputChar;
  char inputString[MAX_LEN];
  char inputSentence[MAX_LEN];

  scanf("%c", &inputChar);

  scanf("%s", inputString);

  scanf("\n");
  scanf("%[^\n]%*c", inputSentence);

  printf("%c\n", inputChar);
  printf("%s\n", inputString);
  printf("%s\n", inputSentence);

  return 0;
}
