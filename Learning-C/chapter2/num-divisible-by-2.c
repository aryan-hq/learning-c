#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("It is divisible by 2\n");
    }
    else
    {
        printf("It is not divisible by 2\n");
    }
    return 0;
}