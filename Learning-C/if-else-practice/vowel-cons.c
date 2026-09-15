#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your alphabet :");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
      if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
      { 
        printf("Its a vowel"); 
      }
      else
      {
        printf("Its a consonant");
      }
    }
    else
    {
      printf("Wrong Input, You should have entered an alphabet");
    }
    return 0;
}