#include<stdio.h>
int main()
{
    int a, c;
    int odd(int);
    printf("Enter a number:");
    scanf("%d", &a);
    c=odd(a);
    printf("%d", c);
}

int odd(int a)
{
    if(a%2==0)
        return 0;
    else if(a%2!=0)
        return 1;
}
