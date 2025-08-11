#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the dollars to be converted into pounds:");
    scanf("%d", &a);
    b=(a*48)/70;
    printf("%d dollars in pounds = %d", a, b);
    return 0;
}
