#include <stdio.h>

struct vector{
    int x;
    int y;
};

int main() {
    struct vector v1 = {5, 10};
    struct vector v2 = {3,7};
    struct vector sum = {0};

    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of vectors : %dx + %dy", sum.x, sum.y);

    return 0;
}