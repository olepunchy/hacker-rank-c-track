#include <stdio.h>

int SumOfNumber(int number) {
    int result = 0;

    while (number > 0) {
        result += (number % 10);
        number /= 10;
    }

    return result;
}

int main() {
    int number = 0;
    scanf("%d", &number);

    printf("%d\n", SumOfNumber(number));

    return 0;
}
