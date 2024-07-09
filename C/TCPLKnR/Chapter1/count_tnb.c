#include <stdio.h>

void main()
{
    int c;
    int cb = 0;
    int ct = 0;
    int cn = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++cb;
        }

        if (c == '\t')
        {
            ++ct;
        }
        
        if (c == '\n')
        {
            ++cn;
        }
    }
    
    printf("%d\n %d\n %d\n",cb, ct, cn);
}