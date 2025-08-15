#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter weight in grams:");
    scanf("%f", &a);
    b=a/1000;
    printf("%f grams in kilograms = %fkg", a, b);
    return 0;
}
