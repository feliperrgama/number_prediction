#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float train[][2] = {
    {0, 0},
    {1, 2},
    {2, 4},
    {3, 6},
    {4, 8},
};

float rand_float(void)
{
    return (float)rand() / (float)RAND_MAX;
}

int main()
{
    srand(time(0));

    // y = x * w -> mult of parameters

    float w = rand_float();
    printf("%f\n", w);

    return 0;
}