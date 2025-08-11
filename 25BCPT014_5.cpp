#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the hour to be converted into minutes:");
    scanf("%d", &a);
    b=a*60;
    printf("%d hrs in minutes = %d", a, b);
    return 0;
}
