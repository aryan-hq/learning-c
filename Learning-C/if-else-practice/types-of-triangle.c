#include <stdio.h>

void main()
{
    int side1;
    int side2;
    int side3;

 //scalene triangle 3 diff sides, isosceles triangle two sides and angles equal, equilateral triangle all sides equal

    printf("Enter the length of first side of the triangle : ");
    scanf("%d", &side1);
    printf("Enter the length second side of the triangle : ");
    scanf("%d", &side2);
    printf("Enter the length third side of the triangle : ");
    scanf("%d", &side3);
    
    if ((side1 == side2) && (side2 == side3))
    {
        printf("Its a Equilateral Triangle!\n");
    }
    else if ((side1 != side2) && (side2 != side3) && (side1 != side3))
    {
        printf("Its a Scalene Triangle!\n");
    }
    else
    {
        printf("Its a Isosceles Triangle!\n");
    }
}