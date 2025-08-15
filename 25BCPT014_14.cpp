#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter temperature in celsius:");
    scanf("%f", &C);
    F=((9*C)/5)+32;
    printf("%f celsius in fahrenheit is %f\n", C, F);
    return 0;
}
