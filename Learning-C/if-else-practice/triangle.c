#include <stdio.h>

void main()
{
    int angle1;
    int angle2;
    int angle3;
    int angle_sum;

    printf("Enter the first angle of the triangle : ");
    scanf("%d", &angle1);
    printf("Enter the second angle of the triangle : ");
    scanf("%d", &angle2);
    printf("Enter the third angle of the triangle : ");
    scanf("%d", &angle3);

    angle_sum = angle1 + angle2 + angle3;
    
    if (angle_sum == 180)
    {
        printf("Its a Triangle! The sum of three angles is 180 degrees.");
    }
    else
    {
        printf("Its not a Triangle! The sum of three angles is not 180 degrees.");
    }
    
}