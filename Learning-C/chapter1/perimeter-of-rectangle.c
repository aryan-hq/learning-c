#include <stdio.h>

int main()
{
    float length;
    float breadth;
    float perimeter;

    printf("Enter Length : ");
    scanf("%f", &length);
    printf("Enter Breadth : ");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);
    printf("Perimeter : %f", perimeter);
    return 0;
}