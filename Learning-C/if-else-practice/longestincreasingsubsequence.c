#include <stdio.h>

int main()
{
    int p;
    int c;
    int len = 0;
    int maxlen = 0;

    printf("Enter a num : ");
    scanf("%d", &p);
    if ( p != -1 )
    {
        len = 1; 
        maxlen = 1;
        printf("Enter a num : ");
        scanf("%d", &c);
        while (c != -1)
        {
            if ( p < c )
            {
                len = len + 1;
            }
            else
            {
                if (maxlen < len)
                {
                    maxlen = len;
                }
                len = 1;
            }
            p = c;
            printf("Enter a num : ");
            scanf("%d", &c);
        }
        if (maxlen < len)
        {
            maxlen = len;
            printf("max length = %d", maxlen);
        }
    }

}