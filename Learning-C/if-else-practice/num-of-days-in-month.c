#include <stdio.h>

void main() 
{
    int month;
    const char *months[] = {"", "31", "28", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31"};

    printf("Enter a number (1-12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) 
    {
        printf("%s\n", months[month]);
    } 
    else 
    {
        printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

}