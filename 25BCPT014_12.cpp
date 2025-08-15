#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter weight in kilgrams:");
    scanf("%f", &a);
    b=a*1000;
    printf("%f kilograms in grams = %fg", a, b);
    return 0;
}
