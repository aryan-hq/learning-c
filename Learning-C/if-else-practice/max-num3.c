#include <stdio.h>

void main()
{
    int a;
    int b;
    int c;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);
    if (a>b)   
    {
        if (a>c)
        {
            printf("The maximum number is : %d", a);
        }
        else
        {
            printf("The maximum number is : %d", c);
        }
    }
    else
    {
        if (b>c)
        {
            printf("The maximum number is : %d", b);
        }
        else
        {
            printf("The maximum number is : %d", c);
        }
    }

}