#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter the minutes to be converted into hours:");
    scanf("%f", &a);
    b=a/60;
    printf("%f minutes in hours = %f", a, b);
    return 0;
}
