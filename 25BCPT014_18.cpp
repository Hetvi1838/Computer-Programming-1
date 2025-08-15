#include<stdio.h>
int main()
{
    float a, p, l, b;
    printf("Enter the length and breadth of the rectangle:");
    scanf("%f %F", &l, &b);
    a=l*b;
    p=2*(l+b);
    printf("The area and the perimeter of the rectangle is %f and %f respectively. ", a, p);
    return 0;
}
