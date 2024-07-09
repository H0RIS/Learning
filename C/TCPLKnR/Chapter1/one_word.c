#include <stdio.h>

#define IN  1
#define OUT 1

void main()
{
    int c;
    int state = IN;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            printf("\n");
            state = OUT;
            continue;
        }
        else if(state == OUT)
        {
            state = IN;
        }

        if (state == IN)
        {
            putchar(c);
        }
        
    }
}