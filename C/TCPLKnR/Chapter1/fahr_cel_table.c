#include <stdio.h>

void main()
{
    float fahr;
    float celsius;

    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("===========\n");
    printf("|fahr to C|\n");
    printf("|  table  |\n");
    printf("|F:\tC:|\n");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}