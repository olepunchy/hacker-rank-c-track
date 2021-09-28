#include <stdio.h>
#include <stdlib.h>

#define MAX_HEIGHT 41

struct box {
    int length;
    int width;
    int height;
};

typedef struct box Box;

int get_volume(Box box) {
    // Volume
    return box.length * box.width * box.height;
}

int is_lower_than_max_height(Box box) {
    if (box.height < MAX_HEIGHT) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int input;
    scanf("%d", &input);

    Box *boxes = malloc(input * sizeof(Box));

    for (int index = 0; index < input; index++) {
        scanf("%d%d%d", &boxes[index].length, &boxes[index].width,
              &boxes[index].height);
    }

    for (int index = 0; index < input; index++) {
        if (is_lower_than_max_height(boxes[index])) {
            printf("%d\n", get_volume(boxes[index]));
        }
    }

    return 0;
}
