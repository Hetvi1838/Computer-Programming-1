#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the rupees to be converted into dollars:");
    scanf("%d", &a);
    b=a/48;
    printf("%d rupees in dollars = %d", a, b);
    return 0;
}
