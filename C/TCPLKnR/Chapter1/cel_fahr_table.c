#include <stdio.h>

void main()
{
    float fahr;
    float celsius;

    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 100;
    step = 5;

    printf("===========\n");
    printf("|C to fahr|\n");
    printf("|  table  |\n");
    printf("|C:\tF:|\n");

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = ((celsius * 9.0/5.0) + 32);
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius += step;
    }
}