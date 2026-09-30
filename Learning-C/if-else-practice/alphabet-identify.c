#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (!(ch >= '0' && ch <= '9')) {
      if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("It's an alphabet\n");
      } else {
        printf("It's a special character\n");
      }
    } else {
      printf("Its a number!");
    }
    
}