#include <stdio.h>

int main()
{
    float side;
    printf("Enter the side of square : ");
    scanf("%f", &side);

    printf("The area of the square is : %.2f ", side * side);
    return 0;
}