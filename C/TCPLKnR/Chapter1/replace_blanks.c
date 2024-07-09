#include <stdio.h>

void main()
{
    int c;
    int b = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++b;
        }

        if (c != ' ')
        {
            if (b >= 1)
            {
                printf(" ");
                b = 0;
            }
            
            putchar(c);
        }
        
        
    }
    
}