#include <stdio.h>

struct complex{
    int real;
    int img;
};

int main() {
    struct complex num1 = {5, 10};

    struct complex *ptr = &num1;
    printf("The real part : %d\n", ptr->real);
    printf("The imaginary part : %d", ptr->img);

    return 0;
}