#include <stdio.h>

void main()
{
    int c;
    int b;
    /*
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    */

    b = getchar() != EOF;
    printf("%d", b);

   //printf("%d\n",EOF);  // EOF == -1
}