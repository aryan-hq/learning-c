#include <stdio.h>

void main()
{
    float c;
    float f;

    printf("Enter temperature in centigrades : ");
    scanf("%f", &c);

    f = ( (9 * c) / 5 ) + 32;

    printf("Temperature converted in Fahrenheit : %f", f);
}
