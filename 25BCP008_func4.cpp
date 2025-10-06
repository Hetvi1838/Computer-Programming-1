#include<stdio.h>
int main()
{
    float a, b, c, d;
    float add(float, float);
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    d=c=add(a, b);
    printf("answer= %f %f", c, d);
}

float add(float a, float b)
{
    return (a+b);
}
