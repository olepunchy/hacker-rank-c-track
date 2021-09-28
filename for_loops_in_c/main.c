#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void loopSomeStuff(int a, int b) {
    // Constraints state that the low number will be greater
    // than or equal to one. For correctness, do nothing if
    // less than or equal to 0.
    if (a <= 0 || b <= 0) {
        return;
    }

    for (int num = a; num <= b; num++) {
        // num is greater than 9 and an even number
        if (num > 9 && num % 2 == 0) {
            puts("even");
        } else if (num > 9 && num % 2 != 0) {
            puts("odd");
        }

        // num is less than or equal to 9
        switch (num) {
            case 1:
                puts("one");
                break;

            case 2:
                puts("two");
                break;

            case 3:
                puts("three");
                break;

            case 4:
                puts("four");
                break;

            case 5:
                puts("five");
                break;

            case 6:
                puts("six");
                break;

            case 7:
                puts("seven");
                break;

            case 8:
                puts("eight");
                break;

            case 9:
                puts("nine");
                break;
        }
    }
}

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    loopSomeStuff(a, b);


    return 0;
}
