#include <stdio.h>

void main()
{
    int c;
    int b = 0;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        if (c == '\t')
        {
            printf("\\t");
        }
        if (c == '\b')
        {
            printf("\\b");
        }
        if (c == '\\')
        {
            printf("\\");
        }
    }
    
}