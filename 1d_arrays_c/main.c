#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Do the thing
    int numberOfElements = 0, total = 0;
    scanf("%d", &numberOfElements);

    int *arrayOfElements = (int *)malloc(numberOfElements * sizeof(int));

    for (int index = 0; index < numberOfElements; index++) {
        scanf("%d", &arrayOfElements[index]);
    }

    for (int index = 0; index < numberOfElements; index++) {
        /* printf("%d\n", arrayOfElements[index]); */
        total += arrayOfElements[index];
    }

    printf("%d\n", total);

    return 0;
}
