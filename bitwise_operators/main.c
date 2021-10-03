#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0, maxOr = 0, maxXor = 0;

    for (int outer = 1; outer <= n; outer++) {
        for (int inner = outer + 1; inner <= n; inner++) {
            if (((outer & inner) > maxAnd) && ((outer & inner) < k)) {
                maxAnd = outer & inner;
            }

            if (((outer | inner) > maxOr) && ((outer | inner) < k)) {
                maxOr = outer | inner;
            }

            if (((outer ^ inner) > maxXor) && ((outer ^ inner) < k)) {
                maxXor = outer ^ inner;
            }
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
