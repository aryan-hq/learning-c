//Write a C program to print all ASCII character with their values.

#include <stdio.h>

void main()
{
    int i;
    for(i=0; i<=255; i++) 
    {
        printf("ASCII value of %c : %d\n", i, i);
    }
}