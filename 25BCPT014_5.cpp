#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    printf("The sum, difference, product and quotient of the two numbers is %f, %f, %f, %f respectively.", a+b, a-b, a*b, a/b);
    return 0;
}
