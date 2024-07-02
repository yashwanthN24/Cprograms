#include <stdio.h>
int main()
{
    int a = 42.0;
    float *b = (float *)&a;
    double f = *b;
    printf("%f", *b);
}