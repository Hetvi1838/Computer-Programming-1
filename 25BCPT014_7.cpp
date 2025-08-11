#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the dollars to be converted into rupees:");
    scanf("%d", &a);
    b=a*48;
    printf("%d dollars in rupees = %d", a, b);
    return 0;
}
