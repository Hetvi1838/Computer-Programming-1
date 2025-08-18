#include<stdio.h>
int main()
{
    int a, b;
    printf("Give two numbers:");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Two numbers swapped are: %d %d", a, b);
    return 0;
}

