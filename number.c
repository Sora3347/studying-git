#include <stdio.h>

long power(int x, int y);

int main(void)
{
    int x;
    printf("Number X: ");
    scanf("%i", &x);

    int y;
    printf("Number Y: ");
    scanf("%i", &y);

    printf("Result: %li\n", power(x, y));
}

long power(int x, int y)
{
    long result = x;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}