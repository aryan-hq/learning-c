#include <stdio.h>

void main()
{
    char ch;
    printf("Enter an alphabet :");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch >= 'a' && ch <= 'z')
        {
            printf("Its a lowercase alphabet.\n");
        }
        else
        {
            printf("Its a uppercase alphabet.\n");
        }
    }
    else
    {
        printf("Dont you know what an alphabet is? You should have entered an alphabet.");
    }
    
}