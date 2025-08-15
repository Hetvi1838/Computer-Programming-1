#include<stdio.h>
int main()
{
    float a, p, l;
    printf("Enter the length of the square:");
    scanf("%f", &l);
    a=l*l;
    p=4*l;
    printf("The area and the perimeter of the square is %f and %f respectively. ", a, p);
    return 0;
}
