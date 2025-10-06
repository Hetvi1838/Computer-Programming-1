#include<stdio.h>
int main()
{
    float a;
    float add(void);
    a=add();
    printf("answer= %f", a);
}

float add(void)
{
    float x, y, z;
    printf("Enter two numbers:");
    scanf("%f %f", &x, &y);
    z=x+y;
    return z;
}
