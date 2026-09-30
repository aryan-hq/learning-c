#include <stdio.h>

void main()
{
    int units;
    float bill;
    float surchargebill;

    printf("Enter the number of units : ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Units can not be negative!");
    }
    else if (units == 0)
    {
        printf("Your Electricity Bill is : Rs 0.00");
    }
    else if (units <= 50)
    {
        bill = units * 0.50;
        printf("Your Electricity Bill is : Rs %.2f", bill);
    }
    else if (units <= 150)
    {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
        printf("Your Electricity Bill is : Rs %.2f", bill);
    }
    else if (units <= 250)
    {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
        printf("Your Electricity Bill is : Rs %.2f", bill);
    }
    else if (units > 250)
    {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
        surchargebill = bill + (bill * 0.20);
        printf("Your Electricity Bill is : Rs %.2f", surchargebill);
    }
    else
    {
        printf("INVALID INPUT");
    }
    
}