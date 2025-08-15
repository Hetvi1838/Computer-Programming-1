#include<stdio.h>
int main()
{
    float a, h, l;
    printf("Enter the length and height of the triangle:");
    scanf("%f %f", &l,&h);
    a=(l*h)/2;
    printf("The area of the triangle is %f. ", a);
    return 0;
}
